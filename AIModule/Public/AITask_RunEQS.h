#pragma once
#include "CoreMinimal.h"
#include "AITask.h"
#include "AITask_RunEQS.generated.h"

class UAITask_RunEQS;
class AAIController;
class UEnvQuery;

UCLASS(Blueprintable)
class AIMODULE_API UAITask_RunEQS : public UAITask {
    GENERATED_BODY()
public:
    UAITask_RunEQS();
    UFUNCTION(BlueprintCallable)
    static UAITask_RunEQS* RunEQS(AAIController* Controller, UEnvQuery* QueryTemplate);
    
};

