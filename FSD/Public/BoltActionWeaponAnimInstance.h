#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "BoltActionWeaponAnimInstance.generated.h"

UCLASS(NonTransient)
class UBoltActionWeaponAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UBoltActionWeaponAnimInstance();
};

