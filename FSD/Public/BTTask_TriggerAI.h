#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
#include "BTTask_TriggerAI.generated.h"

UCLASS()
class UBTTask_TriggerAI : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FName TriggerName;
    
public:
    UBTTask_TriggerAI();
};

