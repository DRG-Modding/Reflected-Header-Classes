#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AxisAngleGizmo.generated.h"

class UGizmoStateTarget;
class IGizmoStateTarget;
class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoFloatParameterSource;
class IGizmoFloatParameterSource;
class UGizmoClickTarget;
class IGizmoClickTarget;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UAxisAngleGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoFloatParameterSource> AngleSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoClickTarget> HitTarget;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoStateTarget> StateTarget;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bInInteraction;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector RotationOrigin;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector RotationAxis;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector RotationPlaneX;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector RotationPlaneY;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector InteractionStartPoint;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector InteractionCurPoint;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float InteractionStartAngle;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float InteractionCurAngle;
    
    UAxisAngleGizmo();
};

