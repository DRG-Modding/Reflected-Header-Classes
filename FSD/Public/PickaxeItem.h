#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Item.h"
#include "PickaxeMeshInstance.h"
#include "UpgradableGear.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "PickaxePartEquip.h"
#include "CoolDownProgressStyle.h"
//CROSS-MODULE INCLUDE: GameplayTags GameplayTagContainer
#include "EPickaxeState.h"
#include "EPickaxePartLocation.h"
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantizeNormal
#include "PickaxeItem.generated.h"

class UAnimMontage;
class UPlayerAnimInstance;
class UItemCharacterAnimationSet;
class UDamageComponent;
class UStatusEffect;
class USceneComponent;
class USoundCue;
class UForceFeedbackEffect;
class UMaterialInterface;
class UPrimitiveComponent;
class UFSDPhysicalMaterial;
class UParticleSystem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FPickaxeItemActiveMiningEvent, bool, success);

UCLASS(Abstract)
class APickaxeItem : public AItem, public IUpgradableGear, public IPickaxePartEquip {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    bool QuadDamageCarving;
    
    UPROPERTY(BlueprintAssignable)
    FPickaxeItemActiveMiningEvent ActiveMiningEvent;
    
protected:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* FP_Root;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* TP_Root;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* FP_Scale;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USceneComponent* TP_Scale;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPlayerAnimInstance* FPAnimInstance;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    UPlayerAnimInstance* TPAnimInstance;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* FP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    UAnimMontage* TP_EquipAnimation;
    
    UPROPERTY(EditAnywhere)
    float EquipDuration;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UItemCharacterAnimationSet* CharacterAnimationSet;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* SpecialDamageComponent;
    
    UPROPERTY(EditAnywhere)
    float SpecialCooldown;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float SpecialCooldownRemaining;
    
    UPROPERTY(EditAnywhere)
    FCoolDownProgressStyle SpecialCooldownUI;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 RockMiningBonus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 DirtMiningBonus;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageRange;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float DamageRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> OnDamageEnemySlowdownEffect;
    
    UPROPERTY(EditAnywhere)
    FGameplayTagContainer WideDamageTrackingTags;
    
    UPROPERTY(EditAnywhere)
    USoundCue* MiningSound;
    
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* MineRumble;
    
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* PartialMineRumble;
    
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* DamageRumble;
    
    UPROPERTY(EditAnywhere)
    float GeneralImpactAudioVolume;
    
    UPROPERTY(EditAnywhere)
    float HitCooldown;
    
    UPROPERTY(EditAnywhere)
    float MiningDuration;
    
    UPROPERTY(EditAnywhere)
    float DistanceConsideredSameHit;
    
    UPROPERTY(EditAnywhere)
    float BlockParticlesScaleFP;
    
    UPROPERTY(EditAnywhere)
    float BlockParticlesScaleTP;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_State)
    EPickaxeState State;
    
    UPROPERTY(EditAnywhere)
    bool ActiveMiningEnabled;
    
    UPROPERTY(EditAnywhere)
    int32 MaxActiveMiningCount;
    
    UPROPERTY(EditAnywhere)
    float ActiveMiningSpeedBoost;
    
    UPROPERTY(EditAnywhere)
    bool PreventQMining;
    
    UPROPERTY(EditAnywhere)
    float QMiningExpectedDelay;
    
    UPROPERTY(EditAnywhere)
    float QMiningInitialDelay;
    
    UPROPERTY(EditAnywhere)
    float QMiningReducedPlayRatePct;
    
    UPROPERTY(EditAnywhere)
    double QMiningLastHitTime;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ActiveMiningSucceedSound;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ActiveMiningFailedSound;
    
    UPROPERTY(BlueprintReadWrite)
    bool CanBezerk;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UStatusEffect> BezerkStatusEffect;
    
    UPROPERTY(EditAnywhere)
    bool PowerAttackEnabled;
    
    UPROPERTY(Transient)
    TMap<EPickaxePartLocation, FPickaxeMeshInstance> EquippedParts;
    
    UPROPERTY(Transient)
    UMaterialInterface* EquippedMaterial;
    
    UFUNCTION(BlueprintImplementableEvent)
    void SpecialTargetDamageEffects(const FVector& ImpactPoint, const FVector& ImpactNormal);
    
public:
    UFUNCTION(BlueprintCallable)
    void SetSpecialCoolDownDuration(float newCooldownDuration);
    
protected:
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_TriggerBezerk();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_SetState(EPickaxeState NewState);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_RemoveDebrisInstance(FVector_NetQuantize HitPos, int32 DebrisIndex, int32 remappedIndex);
    
    UFUNCTION(Server, Unreliable, WithValidation)
    void Server_HitBlock(FVector_NetQuantize Position, int32 Material, bool removeDebris, bool isSpecial);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DoPowerAttack();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DigBlock2(FVector carvePos, FVector carveDirection, int32 TerrainMaterial, bool isSpecial);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DamageTarget(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    
public:
    UFUNCTION(BlueprintCallable)
    void RefreshSpecialCooldown();
    
protected:
    UFUNCTION()
    void OnRep_State(EPickaxeState oldState);
    
    UFUNCTION()
    void OnLoadoutChanged();
    
public:
    UFUNCTION(BlueprintPure)
    float GetSpecialCooldownProgress() const;
    
protected:
    UFUNCTION(NetMulticast, Unreliable)
    void All_SimulateHitBlock(FVector_NetQuantize Position, int32 materia, bool removeDebris, bool isSpecial);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_SimulateDigDebris(FVector_NetQuantize Position, UParticleSystem* Particles, USoundCue* cue);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_SimulateDigBlock(FVector_NetQuantize Position, bool spawnParticles, int32 Material, float Density, bool isSpecial);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_SimulateDamageTarget(UPrimitiveComponent* TargetComponent, bool isSpecial, const FVector_NetQuantize& ImpactPoint, const FVector_NetQuantizeNormal& ImpactNormal, UFSDPhysicalMaterial* PhysMaterial, uint8 BoneIndex);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_DoPowerAttack();
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    APickaxeItem();
};

