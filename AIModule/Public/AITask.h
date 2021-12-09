#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GameplayTasks GameplayTask
#include "AITask.generated.h"

class AAIController;

UCLASS(Abstract)
class AIMODULE_API UAITask : public UGameplayTask {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    AAIController* OwnerController;
    
public:
    UAITask();
};

