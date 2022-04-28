#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "GizmoClickTarget.generated.h"

UINTERFACE()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoClickTarget : public UInterface {
    GENERATED_BODY()
};

class INTERACTIVETOOLSFRAMEWORK_API IGizmoClickTarget : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void UpdateHoverState(bool bHovering) const PURE_VIRTUAL(UpdateHoverState,);
    
};

