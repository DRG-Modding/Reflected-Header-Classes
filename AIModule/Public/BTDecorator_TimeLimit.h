#pragma once
#include "CoreMinimal.h"
#include "BTDecorator.h"
#include "BTDecorator_TimeLimit.generated.h"

UCLASS()
class AIMODULE_API UBTDecorator_TimeLimit : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float TimeLimit;
    
    UBTDecorator_TimeLimit();
};

