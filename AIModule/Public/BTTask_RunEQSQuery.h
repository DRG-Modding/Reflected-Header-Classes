#pragma once
#include "CoreMinimal.h"
#include "AIDynamicParam.h"
#include "BTTask_BlackboardBase.h"
#include "EnvNamedValue.h"
#include "EEnvQueryRunMode.h"
#include "BlackboardKeySelector.h"
#include "EQSParametrizedQueryExecutionRequest.h"
#include "BTTask_RunEQSQuery.generated.h"

class UEnvQuery;

UCLASS(Blueprintable)
class AIMODULE_API UBTTask_RunEQSQuery : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnvNamedValue> QueryParams;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDynamicParam> QueryConfig;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector EQSQueryBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UBTTask_RunEQSQuery();
};

