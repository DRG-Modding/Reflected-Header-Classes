#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTDecorator
#include "IRandRange.h"
#include "BTDecorator_VariableLoop.generated.h"

UCLASS()
class UBTDecorator_VariableLoop : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FIRandRange NumLoops;
    
    UBTDecorator_VariableLoop();
};

