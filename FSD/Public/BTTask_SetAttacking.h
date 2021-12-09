#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTTaskNode
//CROSS-MODULE INCLUDE: AIModule BlackboardKeySelector
#include "BTTask_SetAttacking.generated.h"

UCLASS()
class UBTTask_SetAttacking : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector TargetKey;
    
public:
    UBTTask_SetAttacking();
};

