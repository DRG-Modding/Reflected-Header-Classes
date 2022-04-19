#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=GameplayTasks -ObjectName=GameplayTask -FallbackName=GameplayTask
#include "AITask.generated.h"

class AAIController;

UCLASS(Abstract)
class AIMODULE_API UAITask : public UGameplayTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    AAIController* OwnerController;
    
public:
    UAITask();
};

