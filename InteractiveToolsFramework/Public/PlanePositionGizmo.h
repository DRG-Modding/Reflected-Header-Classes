#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "InteractiveGizmo.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "PlanePositionGizmo.generated.h"

class UGizmoStateTarget;
class IGizmoStateTarget;
class UGizmoAxisSource;
class IGizmoAxisSource;
class UGizmoVec2ParameterSource;
class IGizmoVec2ParameterSource;
class UGizmoClickTarget;
class IGizmoClickTarget;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UPlanePositionGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    TScriptInterface<IGizmoAxisSource> AxisSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoVec2ParameterSource> ParameterSource;
    
    UPROPERTY()
    TScriptInterface<IGizmoClickTarget> HitTarget;
    
    UPROPERTY()
    TScriptInterface<IGizmoStateTarget> StateTarget;
    
    UPROPERTY()
    bool bEnableSignedAxis;
    
    UPROPERTY()
    bool bFlipX;
    
    UPROPERTY()
    bool bFlipY;
    
    UPROPERTY()
    bool bInInteraction;
    
    UPROPERTY()
    FVector InteractionOrigin;
    
    UPROPERTY()
    FVector InteractionNormal;
    
    UPROPERTY()
    FVector InteractionAxisX;
    
    UPROPERTY()
    FVector InteractionAxisY;
    
    UPROPERTY()
    FVector InteractionStartPoint;
    
    UPROPERTY()
    FVector InteractionCurPoint;
    
    UPROPERTY()
    FVector2D InteractionStartParameter;
    
    UPROPERTY()
    FVector2D InteractionCurParameter;
    
    UPROPERTY()
    FVector2D ParameterSigns;
    
    UPlanePositionGizmo();
};

