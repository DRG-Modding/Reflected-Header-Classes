#pragma once
#include "CoreMinimal.h"
#include "GizmoVec2ParameterChange.h"
#include "GizmoBaseVec2ParameterSource.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GizmoPlaneScaleParameterSource.generated.h"

class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoTransformSource;
class IGizmoTransformSource;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoPlaneScaleParameterSource : public UGizmoBaseVec2ParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoTransformSource> TransformSource;
    
    UPROPERTY()
    float ScaleMultiplier;
    
    UPROPERTY()
    FVector2D Parameter;
    
    UPROPERTY()
    FGizmoVec2ParameterChange LastChange;
    
    UPROPERTY()
    FVector CurScaleOrigin;
    
    UPROPERTY()
    FVector CurScaleNormal;
    
    UPROPERTY()
    FVector CurScaleAxisX;
    
    UPROPERTY()
    FVector CurScaleAxisY;
    
    UPROPERTY()
    FTransform InitialTransform;
    
    UGizmoPlaneScaleParameterSource();
};

