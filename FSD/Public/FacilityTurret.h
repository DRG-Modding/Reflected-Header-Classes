#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=RuntimeFloatCurve -FallbackName=RuntimeFloatCurve
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "FacilityTurret.generated.h"

class USoundCue;
class USceneComponent;
class USkeletalMeshComponent;
class AActor;

UCLASS(Blueprintable)
class FSD_API AFacilityTurret : public AEnemyPawn {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USkeletalMeshComponent* Mesh;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float IndicatorActivationDelay;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool FinishAttackIgnoreLoS;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool InvulnerableOnInactive;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float FoldOutTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USoundCue* EngagedAudio;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Offset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float AimAcceleration;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRuntimeFloatCurve AimSpeedCurve;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Replicated, Transient, meta=(AllowPrivateAccess=true))
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, ReplicatedUsing=OnRep_TurretEngaged, meta=(AllowPrivateAccess=true))
    bool TurretEngaged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool AlwaysActive;
    
public:
    AFacilityTurret();
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
protected:
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsAttacking(bool IsAttacking);
    
    UFUNCTION(BlueprintCallable)
    void OnRep_TurretEngaged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnProjectileSpawned();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnEngagedChanged(bool engaged);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnAttack();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FRotator GetLookingDirection() const;
    
};

