#pragma once
#include "CoreMinimal.h"
#include "BTTaskNode.h"
#include "BTTask_MakeNoise.generated.h"

UCLASS()
class AIMODULE_API UBTTask_MakeNoise : public UBTTaskNode {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Loudnes;
    
    UBTTask_MakeNoise();
};

