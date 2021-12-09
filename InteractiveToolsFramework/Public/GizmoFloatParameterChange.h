#pragma once
#include "CoreMinimal.h"
#include "GizmoFloatParameterChange.generated.h"

USTRUCT(BlueprintType)
struct INTERACTIVETOOLSFRAMEWORK_API FGizmoFloatParameterChange {
    GENERATED_BODY()
public:
    UPROPERTY()
    float InitialValue;
    
    UPROPERTY()
    float CurrentValue;
    
    FGizmoFloatParameterChange();
};

