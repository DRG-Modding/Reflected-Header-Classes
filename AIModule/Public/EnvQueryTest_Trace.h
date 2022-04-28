#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AIDataProviderFloatValue.h"
#include "EnvQueryTest.h"
#include "EnvTraceData.h"
#include "AIDataProviderBoolValue.h"
#include "EnvQueryTest_Trace.generated.h"

class UEnvQueryContext;

UCLASS(Blueprintable, MinimalAPI)
class UEnvQueryTest_Trace : public UEnvQueryTest {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEnvTraceData TraceData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderBoolValue TraceFromContext;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ItemHeightOffset;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAIDataProviderFloatValue ContextHeightOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryContext> Context;
    
    UEnvQueryTest_Trace();
};

