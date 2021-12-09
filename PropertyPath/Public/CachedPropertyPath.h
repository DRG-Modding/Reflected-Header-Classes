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
    UPROPERTY()
    TArray<FPropertyPathSegment> Segments;
    
    UPROPERTY()
    UFunction* CachedFunction;
    
public:
    FCachedPropertyPath();
};

