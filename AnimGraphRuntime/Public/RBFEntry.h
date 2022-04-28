#pragma once
#include "CoreMinimal.h"
#include "RBFEntry.generated.h"

USTRUCT(BlueprintType)
struct ANIMGRAPHRUNTIME_API FRBFEntry {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<float> Values;
    
    FRBFEntry();
};

