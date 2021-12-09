#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseVec2ParameterSource.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "GizmoVec2ParameterChange.h"
#include "GizmoLocalVec2ParameterSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoLocalVec2ParameterSource : public UGizmoBaseVec2ParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector2D Value;
    
    UPROPERTY()
    FGizmoVec2ParameterChange LastChange;
    
    UGizmoLocalVec2ParameterSource();
};

