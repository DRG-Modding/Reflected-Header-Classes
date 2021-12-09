#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: GameplayTags GameplayTag
#include "EDamageComponentType.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: Engine HitResult
#include "DamageComponent.generated.h"

class UDamageClass;
class UHealthComponentBase;
class UFSDPhysicalMaterial;
class AActor;
class UPrimitiveComponent;
class UDamageBonusBase;
class UDamageModifier;
class UDamageTag;
class UDamageComponent;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FDamageComponentOnTargetKilledEvent, AActor*, Target, UFSDPhysicalMaterial*, PhysicalMaterial);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FDamageComponentOnTargetDamagedEvent, UHealthComponentBase*, Health, float, Amount, UPrimitiveComponent*, Component, UFSDPhysicalMaterial*, PhysicalMaterial);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDamageComponentOnNoTargetHitEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FDamageComponentOnHitDeadTarget);

UCLASS(BlueprintType, EditInlineNew)
class UDamageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FDamageComponentOnTargetKilledEvent OnTargetKilledEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FDamageComponentOnTargetDamagedEvent OnTargetDamagedEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FDamageComponentOnNoTargetHitEvent OnNoTargetHitEvent;
    
    UPROPERTY(BlueprintAssignable, BlueprintAuthorityOnly)
    FDamageComponentOnHitDeadTarget OnHitDeadTarget;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EDamageComponentType DamageComponentType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float ArmorDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool ShattersArmor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageClass* DamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WeakpointDamageMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FrozenDamageBonusScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float friendlyFireModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float SelfFriendlyFireMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGameplayTag FriendlyFireTag;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool StaggerOnlyOnWeakpointHit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StaggerChance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StaggerDuration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float FearFactor;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UDamageBonusBase*> DamageBonuses;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Export)
    TArray<UDamageModifier*> DamageModifiers;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TArray<UDamageTag*> DamageTags;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UseAreaOfEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float RadialDamage;
    
    UPROPERTY(EditAnywhere)
    bool NoFriendlyFireFromRadial;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDamageClass* RadialDamageClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MinDamagePct;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float DamageRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float MaxDamageRadius;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void PreTestDamageConditions();
    
    UFUNCTION(BlueprintPure)
    static UDamageComponent* GetDamageComponentCDO(TSubclassOf<UDamageComponent> DamageComponent);
    
    UFUNCTION(BlueprintPure)
    float GetDamage() const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void DamageTargetFromHit(const FHitResult& HitResult) const;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable, BlueprintPure=false)
    void DamageTarget(AActor* Target, const FVector& Location, UPrimitiveComponent* HitComponent, UFSDPhysicalMaterial* PhysMat) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DamageArmor_Server(AActor* Target, UPrimitiveComponent* collider, int32 BoneIndex, const FVector& impactLocation) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure=false)
    void DamageArmor_All(AActor* Target, UPrimitiveComponent* collider, int32 BoneIndex) const;
    
    UFUNCTION(BlueprintPure)
    bool ArmorSupportsLocalOnlyCall(AActor* Target) const;
    
    UDamageComponent();
};

