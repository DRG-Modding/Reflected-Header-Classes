#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "BTTask_Wait.generated.h"

UCLASS()
class AIMODULE_API UBTTask_Wait : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float WaitTime;
    
    UPROPERTY(EditAnywhere)
    float RandomDeviation;
    
    UBTTask_Wait();
};

