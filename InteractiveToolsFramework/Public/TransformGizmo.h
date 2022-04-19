#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Rotator -FallbackName=Rotator
#include "EToolContextCoordinateSystem.h"
#include "TransformGizmo.generated.h"

class UTransformProxy;
class UGizmoComponentAxisSource;
class UPrimitiveComponent;
class UGizmoConstantFrameAxisSource;
class UGizmoTransformChangeStateTarget;
class UGizmoScaledTransformSource;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UTransformGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UTransformProxy* ActiveTarget;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bSnapToWorldGrid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bGridSizeIsExplicit;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector ExplicitGridSize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bRotationGridSizeIsExplicit;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FRotator ExplicitRotationGridSize;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bSnapToWorldRotGrid;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bUseContextCoordinateSystem;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EToolContextCoordinateSystem CurrentCoordinateSystem;
    
protected:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ActiveComponents;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> NonuniformScaleComponents;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UInteractiveGizmo*> ActiveGizmos;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGizmoConstantFrameAxisSource* CameraAxisSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGizmoComponentAxisSource* AxisXSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGizmoComponentAxisSource* AxisYSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGizmoComponentAxisSource* AxisZSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGizmoComponentAxisSource* UnitAxisXSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGizmoComponentAxisSource* UnitAxisYSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGizmoComponentAxisSource* UnitAxisZSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGizmoTransformChangeStateTarget* StateTarget;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UGizmoScaledTransformSource* ScaledTransformSource;
    
public:
    UTransformGizmo();
};

