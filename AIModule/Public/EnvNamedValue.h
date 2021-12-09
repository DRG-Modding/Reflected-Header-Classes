#pragma once
#include "CoreMinimal.h"
#include "EAIParamType.h"
#include "EnvNamedValue.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FEnvNamedValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EAIParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Value;
    
    FEnvNamedValue();
};

