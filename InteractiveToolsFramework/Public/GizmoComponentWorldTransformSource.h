#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseTransformSource.h"
#include "GizmoComponentWorldTransformSource.generated.h"

class USceneComponent;

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource {
    GENERATED_BODY()
public:
    UPROPERTY(Export)
    USceneComponent* Component;
    
    UPROPERTY()
    bool bModifyComponentOnTransform;
    
    UGizmoComponentWorldTransformSource();
};

