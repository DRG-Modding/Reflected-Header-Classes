#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "GizmoClickTarget.generated.h"

UINTERFACE()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoClickTarget : public UInterface {
    GENERATED_BODY()
};

class INTERACTIVETOOLSFRAMEWORK_API IGizmoClickTarget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    virtual void UpdateHoverState(bool bHovering) const PURE_VIRTUAL(UpdateHoverState,);
    
};

