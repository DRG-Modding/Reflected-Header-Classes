#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "HealthComponent.h"
#include "HealthRegenerationParams.h"
#include "RejoinListener.h"
#include "AudioWithCooldown.h"
#include "PlayerHealthComponent.generated.h"

class UDamageClass;
class UCurveFloat;
class APlayerCharacter;
class UParticleSystem;
class AActor;
class UParticleSystemComponent;
class UPlayerDamageTakenMutator;
class UStatusEffect;
class AController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_FourParams(FPlayerHealthComponentOnPlayerHit, float, Damage, UDamageClass*, DamageClass, AActor*, DamageCauser, bool, anyHealthLost);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerHealthComponentOnFullHealthCannotHeal);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FPlayerHealthComponentOnHealedFromCrystalEvent);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPlayerHealthComponentOnHealthRegeneratingChanged, bool, isRegenerating);

UCLASS()
class UPlayerHealthComponent : public UHealthComponent, public IRejoinListener {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FPlayerHealthComponentOnFullHealthCannotHeal OnFullHealthCannotHeal;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerHealthComponentOnHealedFromCrystalEvent OnHealedFromCrystalEvent;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerHealthComponentOnHealthRegeneratingChanged OnHealthRegeneratingChanged;
    
    UPROPERTY(BlueprintAssignable)
    FPlayerHealthComponentOnPlayerHit OnPlayerHit;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_MaxHealth)
    float MaxHealth;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, ReplicatedUsing=OnRep_MaxArmor)
    float MaxArmor;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_ArmorDamage)
    float ArmorDamage;
    
    UPROPERTY(EditAnywhere)
    float ReviveHealthReturnRatio;
    
    UPROPERTY(EditAnywhere)
    float ReviveArmorReturnRatio;
    
    UPROPERTY(EditAnywhere)
    float HealthPerCrystalVolume;
    
    UPROPERTY(EditAnywhere)
    FHealthRegenerationParams HealthRegeneration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UCurveFloat* ArmorRegenCurve;
    
    UPROPERTY(EditAnywhere)
    float ShieldRegenDelay;
    
    UPROPERTY(Transient)
    APlayerCharacter* Character;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* GenericImpactParticles;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* ShieldLinkEffect;
    
    UPROPERTY(EditAnywhere)
    FAudioWithCooldown AudioFriendlyFire;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* ShieldLinkInstance;
    
    UPROPERTY(EditAnywhere)
    float InvulnerabilityDuration;
    
    UPROPERTY(EditAnywhere)
    float ReviveInvulnerabilityTime;
    
    UPROPERTY(Transient)
    UPlayerDamageTakenMutator* DamageTakenMutator;
    
    UPROPERTY(Transient)
    TSubclassOf<UStatusEffect> IronWillStatusEffectClass;
    
    UPROPERTY(Transient)
    UStatusEffect* IronWillStatusEffect;
    
    UPROPERTY(Replicated, Transient)
    bool IronWillActive;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IronWillTimeToActivate;
    
public:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    UStatusEffect* SetIronWillStatusEffect(TSubclassOf<UStatusEffect> steClass);
    
    UFUNCTION(BlueprintCallable, Reliable, Server, WithValidation)
    void Server_TryActivateIronWill();
    
protected:
    UFUNCTION()
    void OnRep_MaxHealth();
    
    UFUNCTION()
    void OnRep_MaxArmor();
    
    UFUNCTION()
    void OnRep_ArmorDamage(float oldDamage);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsLowHealth() const;
    
    UFUNCTION(BlueprintPure)
    float GetRemainingIronWillActivationTime() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIsHealthRegenerating() const;
    
    UFUNCTION(BlueprintPure)
    bool GetIronWillActive() const;
    
    UFUNCTION(BlueprintPure)
    float GetHealthRegeneratingTargetRatio() const;
    
protected:
    UFUNCTION(Client, Reliable, WithValidation)
    void Client_SetHealthRegenerating(bool isRegenerating);
    
    UFUNCTION(Client, Unreliable, WithValidation)
    void Client_OnFriendlyFire(AController* EventInstigator, AActor* DamageCauser);
    
    UFUNCTION(Client, Reliable, WithValidation)
    void Client_HealthFullCannotHeal();
    
public:
    UFUNCTION(BlueprintPure)
    bool CanActivateIronWill() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UPlayerHealthComponent();
};

