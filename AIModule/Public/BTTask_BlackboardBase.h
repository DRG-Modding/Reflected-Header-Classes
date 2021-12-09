#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "BlackboardKeySelector.h"
#include "BTTask_BlackboardBase.generated.h"

UCLASS(Abstract)
class AIMODULE_API UBTTask_BlackboardBase : public UBTTaskNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKey;
    
public:
    UBTTask_BlackboardBase();
};

