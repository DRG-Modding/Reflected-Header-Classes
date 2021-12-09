#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeySelector.h"
#include "BTDecorator.h"
#include "BTDecorator_BlackboardBase.generated.h"

UCLASS(Abstract)
class AIMODULE_API UBTDecorator_BlackboardBase : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKey;
    
public:
    UBTDecorator_BlackboardBase();
};

