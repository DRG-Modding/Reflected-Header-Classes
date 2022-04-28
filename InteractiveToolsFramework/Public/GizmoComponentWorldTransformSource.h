#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseTransformSource.h"
#include "GizmoComponentWorldTransformSource.generated.h"

class USceneComponent;

UCLASS(Blueprintable)
class INTERACTIVETOOLSFRAMEWORK_API UGizmoComponentWorldTransformSource : public UGizmoBaseTransformSource {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    USceneComponent* Component;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bModifyComponentOnTransform;
    
    UGizmoComponentWorldTransformSource();
};

