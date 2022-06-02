#pragma once
#include "CoreMinimal.h"
#include "EAIParamType.h"
#include "BlackboardKeySelector.h"
#include "AIDynamicParam.generated.h"

USTRUCT(BlueprintType)
struct AIMODULE_API FAIDynamicParam {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParamName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EAIParamType ParamType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Value;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector BBKey;
    
    FAIDynamicParam();
};

