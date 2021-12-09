#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "GizmoTransformSource.generated.h"

UINTERFACE()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoTransformSource : public UInterface {
    GENERATED_BODY()
};

class INTERACTIVETOOLSFRAMEWORK_API IGizmoTransformSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void SetTransform(const FTransform& NewTransform) PURE_VIRTUAL(SetTransform,);
    
    UFUNCTION()
    virtual  return FTransform{}; GetTransform() const PURE_VIRTUAL(GetTransform,);
    
};

