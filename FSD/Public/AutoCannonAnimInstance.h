#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AnimInstance -FallbackName=AnimInstance
#include "AutoCannonAnimInstance.generated.h"

UCLASS(Blueprintable, NonTransient)
class UAutoCannonAnimInstance : public UAnimInstance {
    GENERATED_BODY()
public:
    UAutoCannonAnimInstance();
};

