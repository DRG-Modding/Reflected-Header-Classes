#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoClickTarget.h"
#include "GizmoLambdaHitTarget.generated.h"

UCLASS(Blueprintable)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoLambdaHitTarget : public UObject, public IGizmoClickTarget {
    GENERATED_BODY()
public:
    UGizmoLambdaHitTarget();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void UpdateHoverState(bool bHovering) const override PURE_VIRTUAL(UpdateHoverState,);
    
};

