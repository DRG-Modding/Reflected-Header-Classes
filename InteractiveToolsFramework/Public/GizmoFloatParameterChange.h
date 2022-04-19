#pragma once
#include "CoreMinimal.h"
#include "GizmoFloatParameterChange.generated.h"

USTRUCT(BlueprintType)
struct INTERACTIVETOOLSFRAMEWORK_API FGizmoFloatParameterChange {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float InitialValue;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float CurrentValue;
    
    FGizmoFloatParameterChange();
};

