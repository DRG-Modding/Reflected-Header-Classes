#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseVec2ParameterSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "GizmoVec2ParameterChange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GizmoUniformScaleParameterSource.generated.h"

class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoTransformSource;
class IGizmoTransformSource;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoUniformScaleParameterSource : public UGizmoBaseVec2ParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoTransformSource> TransformSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ScaleMultiplier;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector2D Parameter;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGizmoVec2ParameterChange LastChange;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector CurScaleOrigin;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector CurScaleNormal;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector CurScaleAxisX;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector CurScaleAxisY;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTransform InitialTransform;
    
    UGizmoUniformScaleParameterSource();
};

