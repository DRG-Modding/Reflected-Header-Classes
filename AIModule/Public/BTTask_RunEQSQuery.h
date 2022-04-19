#pragma once
#include "CoreMinimal.h"
#include "BTTask_BlackboardBase.h"
#include "EnvNamedValue.h"
#include "EQSParametrizedQueryExecutionRequest.h"
#include "EEnvQueryRunMode.h"
#include "AIDynamicParam.h"
#include "BlackboardKeySelector.h"
#include "BTTask_RunEQSQuery.generated.h"

class UEnvQuery;

UCLASS()
class AIMODULE_API UBTTask_RunEQSQuery : public UBTTask_BlackboardBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UEnvQuery* QueryTemplate;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FEnvNamedValue> QueryParams;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAIDynamicParam> QueryConfig;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EEnvQueryRunMode::Type> RunMode;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FBlackboardKeySelector EQSQueryBlackboardKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bUseBBKey;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEQSParametrizedQueryExecutionRequest EQSRequest;
    
    UBTTask_RunEQSQuery();
};

