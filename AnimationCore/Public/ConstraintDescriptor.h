#pragma once
#include "CoreMinimal.h"
#include "EConstraintType.h"
#include "ConstraintDescriptor.generated.h"

USTRUCT(BlueprintType)
struct FConstraintDescriptor {
    GENERATED_BODY()
public:
    UPROPERTY()
    EConstraintType Type;
    
    ANIMATIONCORE_API FConstraintDescriptor();
};

