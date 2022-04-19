#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "AxisPositionGizmo.generated.h"

class UGizmoStateTarget;
class IGizmoStateTarget;
class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoFloatParameterSource;
class IGizmoFloatParameterSource;
class UGizmoClickTarget;
class IGizmoClickTarget;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UAxisPositionGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoFloatParameterSource> ParameterSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoClickTarget> HitTarget;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TScriptInterface<IGizmoStateTarget> StateTarget;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bEnableSignedAxis;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bInInteraction;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector InteractionOrigin;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector InteractionAxis;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector InteractionStartPoint;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector InteractionCurPoint;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float InteractionStartParameter;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float InteractionCurParameter;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float ParameterSign;
    
    UAxisPositionGizmo();
};

