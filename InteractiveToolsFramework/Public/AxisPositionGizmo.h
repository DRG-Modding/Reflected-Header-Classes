#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
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
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoFloatParameterSource> ParameterSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoClickTarget> HitTarget;
    
    UPROPERTY()
    TScriptInterface<IGizmoStateTarget> StateTarget;
    
    UPROPERTY()
    bool bEnableSignedAxis;
    
    UPROPERTY()
    bool bInInteraction;
    
    UPROPERTY()
    FVector InteractionOrigin;
    
    UPROPERTY()
    FVector InteractionAxis;
    
    UPROPERTY()
    FVector InteractionStartPoint;
    
    UPROPERTY()
    FVector InteractionCurPoint;
    
    UPROPERTY()
    float InteractionStartParameter;
    
    UPROPERTY()
    float InteractionCurParameter;
    
    UPROPERTY()
    float ParameterSign;
    
    UAxisPositionGizmo();
};

