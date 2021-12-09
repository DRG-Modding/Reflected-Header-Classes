#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "Health.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "HealthComponentBase.generated.h"

class UHealthComponentBase;
class UFSDPhysicalMaterial;
class UDamageClass;
class AActor;
class UPrimitiveComponent;
class AController;
class UParticleSystem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentBaseOnCanTakeDamageChanged, bool, OutCanTakeDamage);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentBaseOnDamageTaken, float, Amount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentBaseOnHealthChanged, float, Health);
UDELEGATE(BlueprintAuthorityOnly) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FiveParams(FHealthComponentBaseOnBodypartHit, float, Amount, float, BaseAmount, UPrimitiveComponent*, Component, UFSDPhysicalMaterial*, PhysMat, const FName&, BoneName);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentBaseOnDamageHealed, float, Amount);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FHealthComponentBaseOnHit, float, Damage, UDamageClass*, DamageClass, AActor*, DamageCauser, bool, anyHealthLost);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHealthComponentBaseOnDeath, UHealthComponentBase*, HealthComponent);
UDELEGATE(BlueprintAuthorityOnly) DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FHealthComponentBaseOnRadialDamage, float, Damage, float, BaseDamage, const FVector&, Position, float, Radius);

UCLASS(Abstract, BlueprintType)
class UHealthComponentBase : public UActorComponent, public IHealth {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnHealthChanged OnHealthChanged;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnDamageHealed OnDamageHealed;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnDamageTaken OnDamageTaken;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnHit OnHit;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnBodypartHit OnBodypartHit;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnDeath OnDeath;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnRadialDamage OnRadialDamage;
    
    UPROPERTY(BlueprintAssignable)
    FHealthComponentBaseOnCanTakeDamageChanged OnCanTakeDamageChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool ShowLaserPointMarkerWhenDead;
    
    UPROPERTY(EditAnywhere)
    bool canTakeDamage;
    
    UPROPERTY(EditAnywhere)
    bool PassthroughTemperatureDamage;
    
public:
    UFUNCTION(BlueprintCallable)
    float TakeRadialDamage(float damageAmount, FVector BlastCenter, float BlastRadius, float MaxDamageRadius, float MinDamagePct, AController* EventInstigator, AActor* DamageCauser, UPrimitiveComponent* HitComponent, UDamageClass* DamageClass);
    
    UFUNCTION(BlueprintCallable)
    void TakeDamageSimple(float damageAmount, AActor* DamageCauser, UDamageClass* DamageClass);
    
    UFUNCTION(BlueprintCallable)
    void SetHealthDirectly(float newHealthValue);
    
    UFUNCTION(BlueprintCallable)
    void SetCanTakeDamage(bool NewCanTakeDamage);
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void Kill(AActor* DamageCauser);
    
    UFUNCTION(BlueprintPure)
    bool IsDead() const;
    
    UFUNCTION(BlueprintPure)
    bool IsAlive() const;
    
    UFUNCTION(BlueprintCallable)
    float Heal(float Amount);
    
    UFUNCTION(BlueprintPure)
    bool GetShowHealthBar() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealthPct() const;
    
    UFUNCTION(BlueprintPure)
    TScriptInterface<IHealth> GetHealthComponentForCollider(UPrimitiveComponent* Primitive) const;
    
    UFUNCTION(BlueprintPure)
    FVector GetHealthBarWorldOffset() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealth() const;
    
    UFUNCTION(BlueprintPure)
    UParticleSystem* GetGenericImpactParticles() const;
    
    UFUNCTION(BlueprintPure)
    bool GetCanTakeDamage() const;
    
    UFUNCTION(BlueprintPure)
    bool CanTakeDamageFrom(UDamageClass* DamageClass) const;
    
    UHealthComponentBase();
};

