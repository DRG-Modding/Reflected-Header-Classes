#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryTest.h"
#include "EnvTraceData.h"
#include "AIDataProviderBoolValue.h"
#include "AIDataProviderFloatValue.h"
#include "EnvQueryTest_Trace.generated.h"

class UEnvQueryContext;

UCLASS(MinimalAPI)
class UEnvQueryTest_Trace : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FEnvTraceData TraceData;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue TraceFromContext;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ItemHeightOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ContextHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UEnvQueryTest_Trace();
};

