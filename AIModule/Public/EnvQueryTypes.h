#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EnvQueryTypes.generated.h"

UCLASS(Abstract, Blueprintable)
class AIMODULE_API UEnvQueryTypes : public UObject {
    GENERATED_BODY()
public:
    UEnvQueryTypes();
};

