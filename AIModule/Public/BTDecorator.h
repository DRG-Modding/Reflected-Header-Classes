#pragma once
#include "CoreMinimal.h"
#include "BTAuxiliaryNode.h"
#include "EBTFlowAbortMode.h"
#include "BTDecorator.generated.h"

UCLASS(Abstract)
class AIMODULE_API UBTDecorator : public UBTAuxiliaryNode {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint8 bInverseCondition: 1;
    
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBTFlowAbortMode::Type> FlowAbortMode;
    
public:
    UBTDecorator();
};

