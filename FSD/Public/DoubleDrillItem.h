#pragma once
#include "CoreMinimal.h"
#include "DualAnimatedItem.h"
#include "RejoinListener.h"
#include "Upgradable.h"
#include "UpgradableGear.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "EDoubleDrillState.h"
//CROSS-MODULE INCLUDE: Engine Vector_NetQuantize
//CROSS-MODULE INCLUDE: Engine HitResult
#include "DoubleDrillDamageItem.h"
#include "DoubleDrillItem.generated.h"

class UFSDAudioComponent;
class UDoubleDrillAggregator;
class UFirstPersonParticleSystemComponent;
class UDamageComponent;
class UAnimMontage;
class UParticleSystem;
class UForceFeedbackEffect;
class UFSDPhysicalMaterial;
class UDialogDataAsset;
class UDamageClass;
class AActor;

UCLASS()
class ADoubleDrillItem : public ADualAnimatedItem, public IUpgradable, public IUpgradableGear, public IRejoinListener {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UFirstPersonParticleSystemComponent* FP_Left_DrillParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UFirstPersonParticleSystemComponent* FP_Right_DrillParticles;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* DamageComponent;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    UFSDAudioComponent* AudioComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDoubleDrillAggregator* Aggregator;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FPMineMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TPMineMontage;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FPOverheat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TPOverheat;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* FPGunsling;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UAnimMontage* TPGunsling;
    
    UPROPERTY(EditAnywhere)
    FName MiningSpeedAudioParamterName;
    
    UPROPERTY(EditAnywhere)
    UParticleSystem* DrillParticles;
    
    UPROPERTY(EditAnywhere)
    UForceFeedbackEffect* DrillRumble;
    
    UPROPERTY(EditAnywhere)
    float BlockParticlesScaleFP;
    
    UPROPERTY(EditAnywhere)
    float BlockParticlesScaleTP;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    EDoubleDrillState State;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MovementPenalty;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MiningRate;
    
    UPROPERTY(EditAnywhere)
    float HeatReductionPerKill;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FVector CarveSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarveNoise;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float CarverRayCastLength;
    
    UPROPERTY(EditAnywhere)
    float CarveTerrainDistanceCheck;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float TimeToNextMine;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float CurrentDrillSpeed;
    
    UPROPERTY(EditAnywhere)
    float DamageDistance;
    
    UPROPERTY(EditAnywhere)
    float DamageRadius;
    
    UPROPERTY(EditAnywhere)
    float FriendlyDamageRadius;
    
    UPROPERTY(EditAnywhere)
    float DamageRate;
    
    UPROPERTY(VisibleAnywhere)
    float Damage;
    
    UPROPERTY(VisibleAnywhere)
    float ArmorDamageMultiplier;
    
    UPROPERTY(BlueprintReadOnly, VisibleAnywhere)
    UDamageClass* DamageClass;
    
    UPROPERTY(VisibleAnywhere)
    float friendlyFireModifier;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxFuel;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    float Fuel;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FuelUsePerDig;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float FuelUsePerMelee;
    
    UPROPERTY(EditAnywhere)
    float SupplyStatusWeight;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UDialogDataAsset* ShoutOutOfFuel;
    
    UPROPERTY(Transient)
    TArray<FHitResult> HitCache;
    
    UPROPERTY(Transient)
    TArray<FDoubleDrillDamageItem> DamageCache;
    
    UPROPERTY(EditAnywhere)
    float DrillParticlesDuration;
    
    UPROPERTY(ReplicatedUsing=OnRep_SimulatingMining)
    bool IsMining;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_IsGunslinging)
    bool IsGunslinging;
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StopMining();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_StartMining();
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DoDamage(const TArray<FDoubleDrillDamageItem>& Targets);
    
    UFUNCTION(Reliable, Server, WithValidation)
    void Server_DigBlock(FVector_NetQuantize Start, FVector_NetQuantize End);
    
    UFUNCTION()
    void OnTargetKilled(AActor* Target, UFSDPhysicalMaterial* PhysMat);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStopDrilling();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnStartDrilling();
    
    UFUNCTION()
    void OnRep_SimulatingMining();
    
    UFUNCTION()
    void OnRep_IsGunslinging();
    
    UFUNCTION()
    void OnDrillParticlesTimerElapsed();
    
    UFUNCTION(Client, Reliable)
    void Client_Resupply(float percentage);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnDrillDamage();
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_SimulateDigDebris(FVector_NetQuantize Position, int32 DebrisIndex);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_SimulateDigBlock(FVector_NetQuantize Position, bool spawnParticles, int32 Material);
    
    UFUNCTION(NetMulticast, Unreliable)
    void All_SimulateDamage(const TArray<FDoubleDrillDamageItem>& Targets);
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ADoubleDrillItem();
};

