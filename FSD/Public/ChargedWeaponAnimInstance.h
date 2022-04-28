#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "ChargedWeaponAnimInstance.generated.h"

class AChargedWeapon;

UCLASS(Blueprintable, NonTransient)
class UChargedWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    bool isCharging;
    
    UPROPERTY(EditAnywhere, Transient)
    float ChargeupPlayRate;
    
    UPROPERTY(EditAnywhere)
    float ChargeupPlayRateSpeedChange;
    
    UPROPERTY(EditAnywhere)
    float ChargedownPlayRateSpeedChange;
    
    UPROPERTY(EditAnywhere)
    float MaxChargeupPlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    AChargedWeapon* Weapon;
    
public:
    UChargedWeaponAnimInstance();
};

