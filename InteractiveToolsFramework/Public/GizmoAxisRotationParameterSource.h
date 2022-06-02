#pragma once
#include "CoreMinimal.h"
#include "GizmoFloatParameterChange.h"
#include "GizmoBaseFloatParameterSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "GizmoAxisRotationParameterSource.generated.h"

class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoTransformSource;
class IGizmoTransformSource;

UCLASS(Blueprintable)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoAxisRotationParameterSource : public UGizmoBaseFloatParameterSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoTransformSource> TransformSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    float Angle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FGizmoFloatParameterChange LastChange;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurRotationAxis;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector CurRotationOrigin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform InitialTransform;
    
    UGizmoAxisRotationParameterSource();
};

