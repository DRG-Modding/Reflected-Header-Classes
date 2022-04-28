#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseFloatParameterSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "GizmoFloatParameterChange.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GizmoAxisScaleParameterSource.generated.h"

class UGizmoTransformSource;
class IGizmoTransformSource;
class UGizmoAxisSource;
class IGizmoAxisSource;

UCLASS(Blueprintable)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoAxisScaleParameterSource : public UGizmoBaseFloatParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoTransformSource> TransformSource;
    
    UPROPERTY(EditAnywhere)
    float ScaleMultiplier;
    
    UPROPERTY(EditAnywhere)
    float Parameter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoFloatParameterChange LastChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurScaleAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurScaleOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform InitialTransform;
    
    UGizmoAxisScaleParameterSource();
};

