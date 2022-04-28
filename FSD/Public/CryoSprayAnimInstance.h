#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "CryoSprayAnimInstance.generated.h"

class ACryosprayItem;

UCLASS(Blueprintable, NonTransient)
class UCryoSprayAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    ACryosprayItem* Weapon;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool IsFiring;
    
    UPROPERTY(EditAnywhere, Transient)
    float ChargeProgress;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    FRotator ChargeRotation;
    
    UPROPERTY(EditAnywhere, Transient)
    float ChargeBlend;
    
    UPROPERTY(EditAnywhere, Transient)
    float Pressure;
    
public:
    UCryoSprayAnimInstance();
};

