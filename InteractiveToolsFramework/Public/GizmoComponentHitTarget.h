#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoClickTarget.h"
#include "GizmoComponentHitTarget.generated.h"

class UPrimitiveComponent;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoComponentHitTarget : public UObject, public IGizmoClickTarget {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    UPrimitiveComponent* Component;
    
    UGizmoComponentHitTarget();
};

