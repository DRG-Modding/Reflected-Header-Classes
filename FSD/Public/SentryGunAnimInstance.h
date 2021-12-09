#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AnimInstance
//CROSS-MODULE INCLUDE: CoreUObject Rotator
#include "SentryGunAnimInstance.generated.h"

class ASentryGun;
class ARedeployableSentryGun;

UCLASS(Abstract, NonTransient)
class USentryGunAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    ASentryGun* SentryGun;
    
    UPROPERTY(Transient)
    ARedeployableSentryGun* RedeployableSentryGun;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FRotator TurretRotation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float YawOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BuildProgress;
    
public:
    USentryGunAnimInstance();
};

