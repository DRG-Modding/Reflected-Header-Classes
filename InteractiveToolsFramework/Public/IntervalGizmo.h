#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
#include "IntervalGizmo.generated.h"

class UGizmoTransformChangeStateTarget;
class UTransformProxy;
class UPrimitiveComponent;
class UGizmoComponentAxisSource;

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UIntervalGizmo : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGizmoTransformChangeStateTarget* StateTarget;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTransformProxy* TransformProxy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    TArray<UPrimitiveComponent*> ActiveComponents;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UInteractiveGizmo*> ActiveGizmos;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGizmoComponentAxisSource* AxisYSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGizmoComponentAxisSource* AxisZSource;
    
public:
    UIntervalGizmo();
};

