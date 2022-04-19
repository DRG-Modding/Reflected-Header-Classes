#pragma once
#include "CoreMinimal.h"
#include "TagAndValue.generated.h"

USTRUCT(BlueprintType)
struct FTagAndValue {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FName Tag;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FString Value;
    
    ASSETREGISTRY_API FTagAndValue();
};

