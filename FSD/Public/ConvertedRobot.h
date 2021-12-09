#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "WeaponFireOwner.h"
#include "EnemyDeepPathfinderCharacter.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ERobotState.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
#include "EInputKeys.h"
#include "ConvertedRobot.generated.h"

class USoundBase;
class USceneComponent;
class UAudioComponent;
class UEnemyComponent;
class UPawnStatsComponent;
class UOutlineComponent;
class USingleUsableComponent;
class UHitscanComponent;
class USkeletalMeshComponent;
class UPointLightComponent;
class USpotLightComponent;
class UStaticMeshComponent;
class UDamageComponent;
class UParticleSystem;
class AActor;
class AParasiteEnemy;
class AProjectile;
class UAnimSequenceBase;
class USoundCue;
class APlayerCharacter;
class APawn;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConvertedRobotOnShieldChanged, bool, aIsGrowing);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FConvertedRobotOnStateChanged, uint8, aState);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FConvertedRobotOnIntroductionStart);

UCLASS()
class AConvertedRobot : public AEnemyDeepPathfinderCharacter, public IWeaponFireOwner {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    UEnemyComponent* EnemyComponent;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPawnStatsComponent* PawnStats;
    
    UPROPERTY(Export, VisibleAnywhere)
    UOutlineComponent* outline;
    
    UPROPERTY(Export, VisibleAnywhere)
    UHitscanComponent* HitScan;
    
    UPROPERTY(Export, VisibleAnywhere)
    USingleUsableComponent* Usable;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* TurretRoot;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* TurretMesh;
    
    UPROPERTY(Export, VisibleAnywhere)
    UPointLightComponent* MuzzleFlash;
    
    UPROPERTY(Export, VisibleAnywhere)
    USpotLightComponent* SpotLight;
    
    UPROPERTY(Export, VisibleAnywhere)
    UStaticMeshComponent* LightCone;
    
    UPROPERTY(Export, VisibleAnywhere)
    UStaticMeshComponent* LaserBeam;
    
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* ShieldRoot;
    
    UPROPERTY(Export, VisibleAnywhere)
    UStaticMeshComponent* InnerShield;
    
    UPROPERTY(Export, VisibleAnywhere)
    UStaticMeshComponent* OuterShield;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAudioComponent* PulsatingSoundComp;
    
    UPROPERTY(Export, VisibleAnywhere)
    UAudioComponent* LaserWarningSound;
    
    UPROPERTY(Export, VisibleAnywhere)
    UDamageComponent* Damage;
    
    UPROPERTY(BlueprintAssignable)
    FConvertedRobotOnStateChanged OnStateChanged;
    
    UPROPERTY(BlueprintAssignable)
    FConvertedRobotOnShieldChanged OnShieldChanged;
    
    UPROPERTY(BlueprintAssignable)
    FConvertedRobotOnIntroductionStart OnIntroductionStart;
    
protected:
    UPROPERTY(Replicated, Transient)
    bool ForceSit;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* LaserSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* LastPowerDownSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* PowerUpSound;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UAudioComponent> LaserSoundComp;
    
    UPROPERTY(EditAnywhere)
    float IntroductionTime;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsIntroducting)
    bool IsIntroducing;
    
    UPROPERTY(Replicated, Transient)
    bool IntroductionDone;
    
    UPROPERTY(Replicated, Transient)
    bool IsGrowingShield;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float AimDownwardsOffset;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BigShieldScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float SmallShieldScale;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float ShieldGrowthRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LerpExp;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float MinimumShieldSize;
    
    UPROPERTY(Replicated, Transient)
    float TargetShieldSize;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float IdleRotationSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float LaserScaleRate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float MaxSearchAngle;
    
    UPROPERTY(EditDefaultsOnly)
    bool DoSpecialWhenEnemy;
    
    UPROPERTY(EditDefaultsOnly)
    bool DoSpecialWhenFriendly;
    
    UPROPERTY(EditDefaultsOnly)
    bool PerfectTrackingWhenEnemy;
    
    UPROPERTY(EditDefaultsOnly)
    bool PerfectTrackingWhenFriendly;
    
    UPROPERTY(Transient)
    bool ReplaceBurstAttack;
    
    UPROPERTY(EditDefaultsOnly)
    USoundBase* GrenadeFireSound;
    
    UPROPERTY(EditDefaultsOnly)
    UParticleSystem* GrenadeFireParticle;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsFiring)
    bool IsFiring;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TurretSpinSpeed;
    
    UPROPERTY(Replicated, Transient)
    TArray<AActor*> Parasites;
    
    UPROPERTY(EditDefaultsOnly)
    int32 SpawnParasiteNumer;
    
    UPROPERTY(EditDefaultsOnly)
    int32 MaxParasiteSlots;
    
    UPROPERTY(EditDefaultsOnly)
    float ChanceToSpawnParasite;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AParasiteEnemy> ParasiteClass;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_SpinTurret)
    bool SpinTurret;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AProjectile> SpecialAttackProjectile;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    TSubclassOf<AProjectile> FriendlyProjectile;
    
    UPROPERTY(Replicated, Transient)
    bool HasLockedOn;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundBase* TargetingSound;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UAnimSequenceBase* GrenadeShotAnimation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LockOnTime;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    USoundCue* ShootSound;
    
    UPROPERTY(EditAnywhere)
    float ShootSoundFadeout;
    
    UPROPERTY(Export, Transient)
    UAudioComponent* ShootSoundInstance;
    
    UPROPERTY(EditAnywhere)
    USoundCue* ShootSoundTail;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* MuzzleEffect;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    UParticleSystem* TracerEffect;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve MuzzleLightCurve;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GunRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FireRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float GrenadeFireRate;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float BurstCooldown;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MinBurst;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    int32 MaxBurst;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float TurretLerpSpeed;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float DamageWhenFriendly;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float FriendlyFriendlyFireMultiplier;
    
    UPROPERTY(Replicated, Transient)
    bool StartedSpecialAttack;
    
    UPROPERTY(EditDefaultsOnly, ReplicatedUsing=OnRep_TeamState)
    ERobotState TeamState;
    
private:
    UPROPERTY(Replicated, Transient)
    bool IsWalking;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IsDoingSpecialAttack)
    bool IsDoingSpecialAttack;
    
    UPROPERTY(Export, Transient)
    UStaticMeshComponent* TurretRotation;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_Target)
    AActor* CurrentTarget;
    
protected:
    UFUNCTION()
    void UpdateGunsInsideTerrain();
    
public:
    UFUNCTION(BlueprintCallable)
    void StartBossFight();
    
protected:
    UFUNCTION()
    void ParasiteDamaged(float aDamage);
    
    UFUNCTION()
    void OnWeaponsFired(const FVector& aHitResult);
    
    UFUNCTION()
    void OnUsed(APlayerCharacter* aUser, EInputKeys Key);
    
public:
    UFUNCTION()
    void OnSeePawn(APawn* APawn);
    
protected:
    UFUNCTION()
    void OnRep_TeamState();
    
    UFUNCTION()
    void OnRep_Target();
    
    UFUNCTION()
    void OnRep_SpinTurret();
    
    UFUNCTION()
    void OnRep_IsIntroducting();
    
    UFUNCTION()
    void OnRep_IsFiring();
    
    UFUNCTION()
    void OnRep_IsDoingSpecialAttack();
    
    UFUNCTION()
    void OnParasiteDeath(AActor* AParasiteEnemy);
    
public:
    UFUNCTION(BlueprintPure)
    ERobotState GetTeamState() const;
    
    UFUNCTION(BlueprintPure)
    FVector GetPlayerMediumPoint() const;
    
    UFUNCTION(BlueprintPure)
    TArray<AActor*> GetParasites() const;
    
    UFUNCTION(BlueprintPure)
    bool GetHasPoweredDown() const;
    
    UFUNCTION(NetMulticast, Reliable)
    void DestroyAttatchPoint(USceneComponent* aComponent);
    
protected:
    UFUNCTION(NetMulticast, Reliable)
    void CannonEffects();
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnStateChanged(ERobotState NewTeamState);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnShieldChanged(bool isGrowing);
    
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnInstroduce();
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AConvertedRobot();
};

