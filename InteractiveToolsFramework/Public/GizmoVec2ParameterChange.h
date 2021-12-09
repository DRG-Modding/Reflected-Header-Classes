#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "GizmoVec2ParameterChange.generated.h"

USTRUCT(BlueprintType)
struct INTERACTIVETOOLSFRAMEWORK_API FGizmoVec2ParameterChange {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector2D InitialValue;
    
    UPROPERTY()
    FVector2D CurrentValue;
    
    FGizmoVec2ParameterChange();
};

