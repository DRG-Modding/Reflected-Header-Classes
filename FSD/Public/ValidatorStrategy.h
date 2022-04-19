#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ValidatorStrategy.generated.h"

UCLASS(Abstract)
class FSD_API UValidatorStrategy : public UObject {
    GENERATED_BODY()
public:
    UValidatorStrategy();
};

