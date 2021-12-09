#pragma once
#include "CoreMinimal.h"
#include "FacilityTurret.h"
#include "EIndicatorMode.h"
//CROSS-MODULE INCLUDE: CoreUObject Int32Interval
#include "AimingFacilityTurret.generated.h"

class UParticleSystemComponent;

UCLASS()
class AAimingFacilityTurret : public AFacilityTurret {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Transient, ReplicatedUsing=OnRep_IsLockedOn)
    bool IsLockedOn;
    
private:
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* aimIndicator;
    
    UPROPERTY(Export, Transient)
    UParticleSystemComponent* aimIndicatorLock;
    
    UPROPERTY(EditAnywhere)
    float LockOnTime;
    
    UPROPERTY(EditAnywhere)
    float BurstInterval;
    
    UPROPERTY(EditAnywhere)
    float FireInterval;
    
    UPROPERTY(EditAnywhere)
    float TurretRotationSpeed;
    
    UPROPERTY(EditAnywhere)
    float InitialLockonDelay;
    
    UPROPERTY(EditAnywhere)
    float RegainLosLockonModifier;
    
    UPROPERTY(EditAnywhere)
    float AimZOffset;
    
    UPROPERTY(EditAnywhere)
    float TargetLeadingStrength;
    
    UPROPERTY(EditAnywhere)
    float TargetLeadingResponsiveness;
    
    UPROPERTY(EditAnywhere)
    float RaimainAfterShotTime;
    
    UPROPERTY(EditAnywhere)
    float TargetLeadingAfterLockonMultiplier;
    
    UPROPERTY(EditAnywhere)
    float TurningSpeedAfterLockOnMultipier;
    
    UPROPERTY(EditAnywhere)
    float PreLockonTargetChangeChance;
    
    UPROPERTY(EditAnywhere)
    float PreLockongTargetChangeRate;
    
    UPROPERTY(EditAnywhere)
    float IndicatorFlashTime;
    
    UPROPERTY(EditAnywhere)
    bool TrackTargetAfterLockon;
    
    UPROPERTY(EditAnywhere)
    bool ConstantAimAfterLock;
    
    UPROPERTY(EditAnywhere)
    bool UseTraceForLockOn;
    
    UPROPERTY(Transient, ReplicatedUsing=OnRep_IndicatorMode)
    EIndicatorMode IndicatorMode;
    
    UPROPERTY(EditAnywhere)
    FInt32Interval BurstCount;
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetupAimindicator(UParticleSystemComponent* NewAimIndicator, UParticleSystemComponent* NewAimIndicatorLock);
    
private:
    UFUNCTION()
    void OnRep_IsLockedOn();
    
    UFUNCTION()
    void OnRep_IndicatorMode();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnLockedOn(bool lockedOn);
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    AAimingFacilityTurret();
};
