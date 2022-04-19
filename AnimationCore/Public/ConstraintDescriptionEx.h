#pragma once
#include "CoreMinimal.h"
#include "FilterOptionPerAxis.h"
#include "ConstraintDescriptionEx.generated.h"

USTRUCT()
struct FConstraintDescriptionEx {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFilterOptionPerAxis AxesFilterOption;
    
    ANIMATIONCORE_API FConstraintDescriptionEx();
};

