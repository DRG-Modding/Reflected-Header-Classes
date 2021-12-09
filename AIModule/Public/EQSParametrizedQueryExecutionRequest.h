#pragma once
#include "CoreMinimal.h"
#include "AIDynamicParam.h"
#include "BlackboardKeySelector.h"
#include "EEnvQueryRunMode.h"
#include "EQSParametrizedQueryExecutionRequest.generated.h"

class UEnvQuery;

USTRUCT(BlueprintType)
struct AIMODULE_API FEQSParametrizedQueryExecutionRequest {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(EditAnywhere)
    TArray<FAIDynamicParam> QueryConfig;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector EQSQueryBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    
    UPROPERTY(EditAnywhere)
    uint8 bUseBBKeyForQueryTemplate: 1;
    
    FEQSParametrizedQueryExecutionRequest();
};

