#pragma once
#include "CoreMinimal.h"
#include "PropertyAccessPath.generated.h"

USTRUCT(BlueprintType)
struct FPropertyAccessPath {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 PathSegmentStartIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 PathSegmentCount;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 bHasEvents: 1;
    
public:
    PROPERTYACCESS_API FPropertyAccessPath();
};

