#pragma once
#include "CoreMinimal.h"
#include "GizmoFloatParameterChange.h"
#include "GizmoBaseFloatParameterSource.h"
#include "GizmoLocalFloatParameterSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoLocalFloatParameterSource : public UGizmoBaseFloatParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    float Value;
    
    UPROPERTY()
    FGizmoFloatParameterChange LastChange;
    
    UGizmoLocalFloatParameterSource();
};

