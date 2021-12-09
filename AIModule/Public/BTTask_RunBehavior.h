#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "BTTask_RunBehavior.generated.h"

class UBehaviorTree;

UCLASS()
class AIMODULE_API UBTTask_RunBehavior : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    UBehaviorTree* BehaviorAsset;
    
public:
    UBTTask_RunBehavior();
};

