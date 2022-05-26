#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GizmoClickTarget.h"
#include "GizmoComponentHitTarget.generated.h"

class UPrimitiveComponent;

UCLASS(Blueprintable)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoComponentHitTarget : public UObject, public IGizmoClickTarget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* Component;
    
    UGizmoComponentHitTarget();
    
    // Fix for true pure virtual functions not being implemented
    UFUNCTION()
    void UpdateHoverState(bool bHovering) const override PURE_VIRTUAL(UpdateHoverState,);
    
};

