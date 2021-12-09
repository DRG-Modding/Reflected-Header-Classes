#pragma once
#include "CoreMinimal.h"
#include "FacilityTurret.h"
#include "RandRange.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "SpinningFacilityturret.generated.h"

UCLASS()
class ASpinningFacilityturret : public AFacilityTurret {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated, Transient)
    FRotator TargetRotation;
    
    UPROPERTY(EditAnywhere)
    FRandRange AimAtTargetEveryTurn;
    
    UPROPERTY(EditAnywhere)
    float TurnCooldown;
    
    UPROPERTY(EditAnywhere)
    float TurnTimer;
    
    UPROPERTY(EditAnywhere)
    float Acceptance;
    
    UPROPERTY(EditAnywhere)
    float TurnSpeed;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    ASpinningFacilityturret();
};

