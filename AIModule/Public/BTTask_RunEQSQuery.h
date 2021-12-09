#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeySelector.h"
#include "BTTask_BlackboardBase.h"
#include "EnvNamedValue.h"
#include "AIDynamicParam.h"
#include "EEnvQueryRunMode.h"
#include "EQSParametrizedQueryExecutionRequest.h"
#include "BTTask_RunEQSQuery.generated.h"

class UEnvQuery;

UCLASS()
class AIMODULE_API UBTTask_RunEQSQuery : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FEnvNamedValue> QueryParams;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FAIDynamicParam> QueryConfig;
    
    UPROPERTY(VisibleAnywhere)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    
    UPROPERTY(VisibleAnywhere)
    FBlackboardKeySelector EQSQueryBlackboardKey;
    
    UPROPERTY(EditAnywhere)
    bool bUseBBKey;
    
    UPROPERTY(EditAnywhere)
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UBTTask_RunEQSQuery();
};

