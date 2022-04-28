#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnemyDeepPathfinderCharacter.h"
#include "WeaponFireOwner.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
#include "IntroductionStartedDelegate.h"
#include "RobotStateChangedSigDelegate.h"
#include "RobotShieldSwitchSigDelegate.h"
#include "ERobotState.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "EInputKeys.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Quat -FallbackName=Quat
#include "ConvertedRobot.generated.h"

class UOutlineComponent;
class USceneComponent;
class UPawnStatsComponent;
class UEnemyComponent;
class UHitscanComponent;
class USingleUsableComponent;
class APlayerCharacter;
class USkeletalMeshComponent;
class UAudioComponent;
class UPointLightComponent;
class USpotLightComponent;
class UStaticMeshComponent;
class UDamageComponent;
class USoundBase;
class UParticleSystem;
class AActor;
class AParasiteEnemy;
class AProjectile;
class UAnimSequenceBase;
class USoundCue;
class APawn;

UCLASS(Blueprintable)
class AConvertedRobot : public AEnemyDeepPathfinderCharacter, public IWeaponFireOwner {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UOutlineComponent* outline;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UHitscanComponent* HitScan;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USingleUsableComponent* Usable;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* TurretRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* TurretMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPointLightComponent* MuzzleFlash;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USpotLightComponent* SpotLight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LightCone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* LaserBeam;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* ShieldRoot;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* InnerShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* OuterShield;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* PulsatingSoundComp;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UAudioComponent* LaserWarningSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRobotStateChangedSig OnStateChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRobotShieldSwitchSig OnShieldChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FIntroductionStarted OnIntroductionStart;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool ForceSit;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LaserSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* LastPowerDownSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* PowerUpSound;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UAudioComponent> LaserSoundComp;
    
    UPROPERTY(EditAnywhere)
    float IntroductionTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsIntroducting, meta=(AllowPrivateAccess=true))
    bool IsIntroducing;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IntroductionDone;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsGrowingShield;
    
    UPROPERTY(EditAnywhere)
    float AimDownwardsOffset;
    
    UPROPERTY(EditAnywhere)
    float BigShieldScale;
    
    UPROPERTY(EditAnywhere)
    float SmallShieldScale;
    
    UPROPERTY(EditAnywhere)
    float ShieldGrowthRate;
    
    UPROPERTY(EditAnywhere)
    float LerpExp;
    
    UPROPERTY(EditAnywhere)
    float MinimumShieldSize;
    
    UPROPERTY(EditAnywhere, Replicated, Transient)
    float TargetShieldSize;
    
    UPROPERTY(EditAnywhere)
    float IdleRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float LaserScaleRate;
    
    UPROPERTY(EditAnywhere)
    float MaxSearchAngle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoSpecialWhenEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool DoSpecialWhenFriendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PerfectTrackingWhenEnemy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool PerfectTrackingWhenFriendly;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool ReplaceBurstAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* GrenadeFireSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* GrenadeFireParticle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsFiring, meta=(AllowPrivateAccess=true))
    bool IsFiring;
    
    UPROPERTY(EditAnywhere)
    float TurretSpinSpeed;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    TArray<AActor*> Parasites;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 SpawnParasiteNumer;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxParasiteSlots;
    
    UPROPERTY(EditAnywhere)
    float ChanceToSpawnParasite;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AParasiteEnemy> ParasiteClass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_SpinTurret, meta=(AllowPrivateAccess=true))
    bool SpinTurret;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> SpecialAttackProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AProjectile> FriendlyProjectile;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool HasLockedOn;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundBase* TargetingSound;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UAnimSequenceBase* GrenadeShotAnimation;
    
    UPROPERTY(EditAnywhere)
    float LockOnTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShootSound;
    
    UPROPERTY(EditAnywhere)
    float ShootSoundFadeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UAudioComponent* ShootSoundInstance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* ShootSoundTail;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* MuzzleEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UParticleSystem* TracerEffect;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve MuzzleLightCurve;
    
    UPROPERTY(EditAnywhere)
    float GunRange;
    
    UPROPERTY(EditAnywhere)
    float FireRate;
    
    UPROPERTY(EditAnywhere)
    float GrenadeFireRate;
    
    UPROPERTY(EditAnywhere)
    float BurstCooldown;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinBurst;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxBurst;
    
    UPROPERTY(EditAnywhere)
    float TurretLerpSpeed;
    
    UPROPERTY(EditAnywhere)
    float DamageWhenFriendly;
    
    UPROPERTY(EditAnywhere)
    float FriendlyFriendlyFireMultiplier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool StartedSpecialAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, ReplicatedUsing=OnRep_TeamState, meta=(AllowPrivateAccess=true))
    ERobotState TeamState;
    
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    bool IsWalking;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_IsDoingSpecialAttack, meta=(AllowPrivateAccess=true))
    bool IsDoingSpecialAttack;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, Transient, meta=(AllowPrivateAccess=true))
    UStaticMeshComponent* TurretRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_Target, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
public:
    AConvertedRobot();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintCallable)
    void UpdateGunsInsideTerrain();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartBossFight();
    
protected:
    UFUNCTION()
    void ParasiteDamaged(float aDamage);
    
    UFUNCTION(BlueprintCallable)
    void OnWeaponsFired(const FVector& aHitResult);
    
    UFUNCTION(BlueprintCallable)
    void OnUsed(APlayerCharacter* aUser, EInputKeys Key);
    
public:
    UFUNCTION(BlueprintCallable)
    void OnSeePawn(APawn* APawn);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnRep_TeamState();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_Target();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_SpinTurret();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsIntroducting();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsFiring();
    
    UFUNCTION(BlueprintCallable)
    void OnRep_IsDoingSpecialAttack();
    
    UFUNCTION(BlueprintCallable)
    void OnParasiteDeath(AActor* AParasiteEnemy);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    ERobotState GetTeamState() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector GetPlayerMediumPoint() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    TArray<AActor*> GetParasites() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool GetHasPoweredDown() const;
    
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void DestroyAttatchPoint(USceneComponent* aComponent);
    
protected:
    UFUNCTION(BlueprintCallable, NetMulticast, Reliable)
    void CannonEffects();
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnStateChanged(ERobotState NewTeamState);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnShieldChanged(bool isGrowing);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnInstroduce();
    
    
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

