#pragma once
#include "CoreMinimal.h"
#include "HealthComponentBase.h"
#include "EHealthbarType.h"
#include "HealthComponent.generated.h"

class UFSDPhysicalMaterial;
class UDamageClass;
class UHealthComponent;
class AActor;
class USubHealthComponent;
class AController;
class UDamageTag;
class UPawnStat;
class UPawnStatsComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentOnArmorChanged, float, Health);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_EightParams(FHealthComponentOnDeathDetailed, UHealthComponent*, HealthComponent, float, damageAmount, UDamageClass*, DamageClass, AActor*, damageCause, AController*, Instigator, UFSDPhysicalMaterial*, PhysicalMaterial, bool, IsRadial, const TArray<UDamageTag*>&, Tags);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentOnArmorDamaged, float, Amount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentOnArmorHealed, float, Amount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHealthComponentOnNewHealthSegment, int32, currSegment, int32, prevSegment);

UCLASS()
class UHealthComponent : public UHealthComponentBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHealthComponentOnArmorChanged OnArmorChanged;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentOnArmorDamaged OnArmorDamaged;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentOnArmorHealed OnArmorHealed;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FHealthComponentOnDeathDetailed OnDeathDetailed;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentOnNewHealthSegment OnNewHealthSegment;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_Damage)
    float Damage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<float> HealthSegmentSizes;
    
    UPROPERTY(EditAnywhere)
    bool CanDamageThroughSegments;
    
    UPROPERTY(Export, Transient)
    TArray<USubHealthComponent*> SubHealthComponents;
    
    UPROPERTY(EditAnywhere)
    bool ShouldUseLargestSubhealthDamageTaken;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool InvulnerableToNonDefinedResistances;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<UPawnStat*, float> Resistances;
    
    UPROPERTY(EditAnywhere)
    bool AffectedByGlobalWeakpointDamageMultiplier;
    
    UPROPERTY(EditAnywhere)
    bool UseDormancy;
    
    UPROPERTY(Export, Transient)
    UPawnStatsComponent* PawnStats;
    
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ToggleCanTakeDamage();
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Resupply(float percentage);
    
protected:
    UFUNCTION()
    void OnRep_Damage(float oldDamage);
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void HealArmor(float Amount);
    
    UFUNCTION(BlueprintPure)
    bool HasArmor() const;
    
    UFUNCTION(BlueprintPure)
    float GetMaxArmor() const;
    
    UFUNCTION(BlueprintPure)
    EHealthbarType GetHealthbarType() const;
    
    UFUNCTION(BlueprintPure)
    void GetCurrentHealthSegment(int32& Segment, float& segmentHealth, float& segmentHealthPercent);
    
    UFUNCTION(BlueprintPure)
    float GetArmorPct() const;
    
    UFUNCTION(BlueprintPure)
    float GetArmor() const;
    
protected:
    UFUNCTION(Client, Unreliable)
    void Client_ReceivedHit(float Amount, UDamageClass* DamageClass, AActor* DamageCauser, bool anyHealthLost);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UHealthComponent();
};

