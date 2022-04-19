#pragma once
#include "CoreMinimal.h"
#include "GizmoClickTarget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoComponentHitTarget.generated.h"

class UPrimitiveComponent;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoComponentHitTarget : public UObject, public IGizmoClickTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    UGizmoComponentHitTarget();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION(BlueprintCallable)
    void UpdateHoverState(bool bHovering) const override PURE_VIRTUAL(UpdateHoverState,);
    
};

