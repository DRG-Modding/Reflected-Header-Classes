#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: PropertyPath CachedPropertyPath
#include "DynamicPropertyPath.generated.h"

USTRUCT(BlueprintType)
struct UMG_API FDynamicPropertyPath : public FCachedPropertyPath {
    GENERATED_BODY()
public:
    FDynamicPropertyPath();
};

