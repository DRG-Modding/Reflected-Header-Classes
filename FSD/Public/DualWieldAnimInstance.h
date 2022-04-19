#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "DualWieldAnimInstance.generated.h"

UCLASS(NonTransient)
class UDualWieldAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UDualWieldAnimInstance();
};

