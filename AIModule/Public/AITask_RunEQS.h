#pragma once
#include "CoreMinimal.h"
#include "AITask.h"
#include "AITask_RunEQS.generated.h"

class UEnvQuery;
class UAITask_RunEQS;
class AAIController;

UCLASS()
class AIMODULE_API UAITask_RunEQS : public UAITask {
    GENERATED_BODY()
public:
    UAITask_RunEQS();
    UFUNCTION(BlueprintCallable)
    static UAITask_RunEQS* RunEQS(AAIController* Controller, UEnvQuery* QueryTemplate);
    
};

