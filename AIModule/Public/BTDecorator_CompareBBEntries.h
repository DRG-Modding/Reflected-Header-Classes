#pragma once
#include "CoreMinimal.h"
#include "BlackboardKeySelector.h"
#include "BTDecorator.h"
#include "EBlackBoardEntryComparison.h"
#include "BTDecorator_CompareBBEntries.generated.h"

UCLASS()
class AIMODULE_API UBTDecorator_CompareBBEntries : public UBTDecorator {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EBlackBoardEntryComparison::Type> Operator;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyA;
    
    UPROPERTY(EditAnywhere)
    FBlackboardKeySelector BlackboardKeyB;
    
public:
    UBTDecorator_CompareBBEntries();
};

