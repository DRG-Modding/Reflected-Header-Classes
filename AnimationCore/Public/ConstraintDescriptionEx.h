#pragma once
#include "CoreMinimal.h"
#include "FilterOptionPerAxis.h"
#include "ConstraintDescriptionEx.generated.h"

USTRUCT()
struct FConstraintDescriptionEx {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFilterOptionPerAxis AxesFilterOption;
    
    ANIMATIONCORE_API FConstraintDescriptionEx();
};

