#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "FacilityTurretAnimInstance.generated.h"

UCLASS(NonTransient)
class UFacilityTurretAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    FRotator AimRotation;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere, Transient)
    bool IsEngaged;
    
public:
    UFacilityTurretAnimInstance();
};

