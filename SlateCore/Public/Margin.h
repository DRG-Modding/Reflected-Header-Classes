#pragma once
#include "CoreMinimal.h"
#include "Margin.generated.h"

USTRUCT(BlueprintType)
struct FMargin {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Left;
    
    UPROPERTY(EditAnywhere)
    float Top;
    
    UPROPERTY(EditAnywhere)
    float Right;
    
    UPROPERTY(EditAnywhere)
    float Bottom;
    
    SLATECORE_API FMargin();
};

