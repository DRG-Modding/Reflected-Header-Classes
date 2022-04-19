#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AutoCannonAnimInstance.generated.h"

UCLASS(NonTransient)
class UAutoCannonAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UAutoCannonAnimInstance();
};

