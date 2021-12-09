#pragma once
#include "CoreMinimal.h"
#include "TagAndValue.generated.h"

USTRUCT(BlueprintType)
struct FTagAndValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    FString Value;
    
    ASSETREGISTRY_API FTagAndValue();
};

