#pragma once
#include "CoreMinimal.h"
#include "EnemyPawn.h"
//CROSS-MODULE INCLUDE: Engine RuntimeFloatCurve
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "FacilityTurret.generated.h"

class AActor;
class USceneComponent;
class USkeletalMeshComponent;
class USoundCue;

UCLASS()
class FSD_API AFacilityTurret : public AEnemyPawn {
    GENERATED_BODY()
public:
    UPROPERTY(Export, VisibleAnywhere)
    USceneComponent* Root;
    
    UPROPERTY(BlueprintReadOnly, Export, VisibleAnywhere)
    USkeletalMeshComponent* Mesh;
    
protected:
    UPROPERTY(EditAnywhere)
    float IndicatorActivationDelay;
    
    UPROPERTY(EditAnywhere)
    bool FinishAttackIgnoreLoS;
    
    UPROPERTY(EditAnywhere)
    bool InvulnerableOnInactive;
    
    UPROPERTY(EditAnywhere)
    float FoldOutTime;
    
    UPROPERTY(EditAnywhere)
    USoundCue* EngagedAudio;
    
    UPROPERTY(EditAnywhere)
    float Offset;
    
    UPROPERTY(EditAnywhere)
    float AimAcceleration;
    
    UPROPERTY(EditDefaultsOnly)
    FRuntimeFloatCurve AimSpeedCurve;
    
    UPROPERTY(BlueprintReadOnly, Replicated, Transient)
    AActor* CurrentTarget;
    
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_TurretEngaged)
    bool TurretEngaged;
    
    UPROPERTY(EditAnywhere)
    bool AlwaysActive;
    
    UFUNCTION(BlueprintAuthorityOnly, BlueprintCallable)
    void SetIsAttacking(bool IsAttacking);
    
    UFUNCTION()
    void OnRep_TurretEngaged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnProjectileSpawned();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnEngagedChanged(bool engaged);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnAttack();
    
    UFUNCTION(BlueprintPure)
    FRotator GetLookingDirection() const;
    
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AFacilityTurret();
};

