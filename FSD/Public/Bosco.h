#pragma once
#include "CoreMinimal.h"
#include "Skinnable.h"
#include "UpgradableGear.h"
#include "DeepPathfinderCharacter.h"
#include "ItemIDInterface.h"
#include "WeaponFireOwner.h"
#include "Upgradable.h"
#include "SaveGameIDInterface.h"
#include "NotifyMessageReceiver.h"
#include "ReviveUsedSigDelegate.h"
#include "StateChangedSigDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTags -ObjectName=GameplayTagContainer -FallbackName=GameplayTagContainer
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Vector_NetQuantize -FallbackName=Vector_NetQuantize
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "BoscoLightSetting.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EDroneAIState.h"
#include "DamageData.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "Bosco.generated.h"

class UBoscoProjectileAbillity;
class UDroneMiningToolBase;
class UPawnSensingComponent;
class UTerrainMaterial;
class UHealthComponent;
class UBoscoAbillityComponent;
class UDamageComponent;
class UBobbingComponent;
class APlayerCharacter;
class USkeletalMeshComponent;
class UHitscanComponent;
class USpotLightComponent;
class UAudioComponent;
class UPointLightComponent;
class UParticleSystemComponent;
class UDialogDataAsset;
class USoundBase;
class UUpgradableBoscoComponent;
class UParticleSystem;
class UItemUpgrade;
class UItemID;
class UAnimSequenceBase;
class UDroneSkinnableComponent;
class UBoscoAbillity;
class AActor;
class USoundCue;
class ABoscoController;

UCLASS(Blueprintable)
class FSD_API ABosco : public ADeepPathfinderCharacter, public IWeaponFireOwner, public IUpgradableGear, public IUpgradable, public ISaveGameIDInterface, public ISkinnable, public IItemIDInterface, public INotifyMessageReceiver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHealthComponent* HealthComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBoscoAbillityComponent* AbillityComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPawnSensingComponent* Senses;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDroneMiningToolBase* MiningTool;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UBobbingComponent* BobbingComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* BoscoMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHitscanComponent* DroneHitScan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPointLightComponent* PointLightComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* LTrail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UParticleSystemComponent* RTrail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* MomentumSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* DefendDrilldozerShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* DefendGenericShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* MineOrderShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* KillOrderShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* GoToOrderShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ReviveOrderShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* PickupGemShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* ReviveThankShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* GeneralCallShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* RocketAbillityShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UDialogDataAsset* CryoGrenadeAbillityShout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* MineResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* CombatResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LightResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ReviveResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AbillityResponse;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    USoundBase* CurrentResponse;
    
    UPROPERTY(EditAnywhere)
    float ResponseTime;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FReviveUsedSig OnReviveused;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FStateChangedSig OnStateChanged;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGameplayTagContainer LosMatchTags;
    
    UPROPERTY(EditAnywhere)
    float SeeTargetTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* AbillityErrorSound;
    
    UPROPERTY(EditAnywhere)
    float INcreasedMiningArea;
    
    UPROPERTY(EditAnywhere)
    float TimeToResetMiningBoost;
    
    UPROPERTY(EditAnywhere)
    float MiningBoosMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UItemUpgrade*> upgrades;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBoscoProjectileAbillity* RocketAbillity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UBoscoProjectileAbillity* CryoGrenadeAbillity;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGuid SavegameID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UItemID* ItemID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UUpgradableBoscoComponent* Upgradable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* SaluteAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* PickupGemAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* DropGemAnimation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UAnimSequenceBase*> HitReaction;
    
    UPROPERTY(EditAnywhere)
    float SaluteDuration;
    
    UPROPERTY(AssetRegistrySearchable, BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDroneSkinnableComponent* Skinnable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FBoscoLightSetting> LightSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TargetLightSetting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UBoscoAbillity*> CombatAbillities;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* RotateTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    FVector LookAtLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShootSound;
    
    UPROPERTY(EditAnywhere)
    float ShootSoundFadeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShootSoundTail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShootSoundInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TracerEffect;
    
    UPROPERTY(EditAnywhere)
    float FireRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinShotsInBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxShotsInBurst;
    
    UPROPERTY(EditAnywhere)
    float MaxRandomBurstCooldown;
    
    UPROPERTY(EditAnywhere)
    float MinRandomBurstCooldown;
    
    UPROPERTY(EditAnywhere)
    float MaxFiringAngle;
    
    UPROPERTY(EditAnywhere)
    float MaxEngagementRange;
    
    UPROPERTY(EditAnywhere)
    float MinTracerDistance;
    
    UPROPERTY(EditAnywhere)
    float TracerSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* ReviveSirens;
    
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<UAudioComponent> ReviveSirensComponent;
    
    UPROPERTY(EditAnywhere)
    float DistanceToFacePlayer;
    
    UPROPERTY(EditAnywhere)
    float RotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float PrepareToMineRange;
    
    UPROPERTY(EditAnywhere)
    float MiningRange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxRevives;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsFiring;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsInRangeToMine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsPreparedToMine;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsMining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsReviving;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsRotateMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ABoscoController* DroneController;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_State, meta=(AllowPrivateAccess=true))
    EDroneAIState CurrentState;
    
public:
    ABosco();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    UFUNCTION(BlueprintCallable)
    void UseABillity();
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void StopShootingSound();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StateChanged(EDroneAIState aCurrentState);
    
    UFUNCTION(BlueprintCallable)
    void StartSelfDestruct();
    
    UFUNCTION(BlueprintCallable)
    void SetIsReviving(bool aIsReviving);
    
    UFUNCTION(BlueprintCallable)
    void SetIsRepairing(bool isRepairing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SelfDestruct();
    
    UFUNCTION(BlueprintCallable)
    void ReviveCounterChanged(int32 remainingCharges);
    
protected:
    UFUNCTION(BlueprintCallable)
    void Respond();
    
public:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void PlaySalute();
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnWeaponFired(const FVector& Location);
    
    UFUNCTION(BlueprintCallable)
    void OnTargetBurrowChange(bool burrowed);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnRep_State(EDroneAIState prevState);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnReadyToShoot();
    
    UFUNCTION(BlueprintCallable)
    void OnNotReadyToShoot();
    
    UFUNCTION()
    void OnHit(float Amount, float BaseAmount, const FDamageData& DamageData);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnGrabbedGem();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void MineEffects(UTerrainMaterial* aTerrainMaterial, FVector_NetQuantize aLocation, FRotator aRotation);
    
    UFUNCTION(BlueprintCallable)
    UUpgradableBoscoComponent* GetUpgradeComponent();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetReviveCharges() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UBoscoAbillityComponent* GetPlayerAbillity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    EDroneAIState GetCurrentState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetCarryInterrupted() const;
    
    UFUNCTION(BlueprintCallable)
    bool DoPickupGemAnimation();
    
    UFUNCTION(BlueprintCallable, NetMulticast, Unreliable)
    void All_OnSelfDestruct();
    
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    APlayerCharacter* GetPlayerCharacter() const override PURE_VIRTUAL(GetPlayerCharacter, return NULL;);
    
    UFUNCTION(BlueprintCallable)
    FQuat GetMuzzleQuat() const override PURE_VIRTUAL(GetMuzzleQuat, return FQuat{};);
    
    UFUNCTION(BlueprintCallable)
    FVector GetMuzzleLocation() const override PURE_VIRTUAL(GetMuzzleLocation, return FVector{};);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsLocallyControlled() const override PURE_VIRTUAL(GetIsLocallyControlled, return false;);
    
    UFUNCTION(BlueprintCallable)
    bool GetIsFirstPerson() const override PURE_VIRTUAL(GetIsFirstPerson, return false;);
    
};

