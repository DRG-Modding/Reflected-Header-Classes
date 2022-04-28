#pragma once
#include "CoreMinimal.h"
#include "EnemyAnimInstance.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "FacilityTurretAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UFacilityTurretAnimInstance : public UEnemyAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator AimRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsEngaged;
    
public:
    UFacilityTurretAnimInstance();
};

