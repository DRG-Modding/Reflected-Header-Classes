#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
#include "BTTask_SetCondition.generated.h"

UCLASS()
class UBTTask_SetCondition : public UBTTaskNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector ConditionalKey;
    
    UPROPERTY(EditAnywhere)
    bool Value;
    
public:
    UBTTask_SetCondition();
};

