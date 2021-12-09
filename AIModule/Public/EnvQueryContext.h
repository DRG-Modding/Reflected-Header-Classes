#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EnvQueryContext.generated.h"

UCLASS(Abstract, EditInlineNew)
class AIMODULE_API UEnvQueryContext : public UObject {
    GENERATED_BODY()
public:
    UEnvQueryContext();
};

