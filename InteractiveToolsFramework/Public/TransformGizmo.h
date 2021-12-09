#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
#include "EToolContextCoordinateSystem.h"
#include "TransformGizmo.generated.h"

class UGizmoConstantFrameAxisSource;
class UTransformProxy;
class UGizmoScaledTransformSource;
class UPrimitiveComponent;
class UGizmoTransformChangeStateTarget;
class UGizmoComponentAxisSource;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UTransformGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    UTransformProxy* ActiveTarget;
    
    UPROPERTY()
    bool bSnapToWorldGrid;
    
    UPROPERTY()
    bool bUseContextCoordinateSystem;
    
    UPROPERTY()
    EToolContextCoordinateSystem CurrentCoordinateSystem;
    
protected:
    UPROPERTY(Export)
    TArray<UPrimitiveComponent*> ActiveComponents;
    
    UPROPERTY(Export)
    TArray<UPrimitiveComponent*> NonuniformScaleComponents;
    
    UPROPERTY()
    TArray<UInteractiveGizmo*> ActiveGizmos;
    
    UPROPERTY()
    UGizmoConstantFrameAxisSource* CameraAxisSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* AxisXSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* AxisYSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* AxisZSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* UnitAxisXSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* UnitAxisYSource;
    
    UPROPERTY()
    UGizmoComponentAxisSource* UnitAxisZSource;
    
    UPROPERTY()
    UGizmoTransformChangeStateTarget* StateTarget;
    
    UPROPERTY()
    UGizmoScaledTransformSource* ScaledTransformSource;
    
public:
    UTransformGizmo();
};

