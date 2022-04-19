#pragma once
#include "CoreMinimal.h"
#include "PropertyPathSegment.h"
#include "CachedPropertyPath.generated.h"

class UFunction;

USTRUCT()
struct PROPERTYPATH_API FCachedPropertyPath {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FPropertyPathSegment> Segments;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UFunction* CachedFunction;
    
public:
    FCachedPropertyPath();
};

