#pragma once
#include "CoreMinimal.h"
#include "Margin.generated.h"

USTRUCT(BlueprintType)
struct FMargin {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Left;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Top;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Right;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Bottom;
    
    SLATECORE_API FMargin();
};

