#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseFloatParameterSource.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "GizmoFloatParameterChange.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GizmoAxisRotationParameterSource.generated.h"

class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoTransformSource;
class IGizmoTransformSource;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoTransformSource> TransformSource;
    
    UPROPERTY()
    float Angle;
    
    UPROPERTY()
    FGizmoFloatParameterChange LastChange;
    
    UPROPERTY()
    FVector CurRotationAxis;
    
    UPROPERTY()
    FVector CurRotationOrigin;
    
    UPROPERTY()
    FTransform InitialTransform;
    
    UGizmoAxisRotationParameterSource();
};

