#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GizmoTransformSource.h"
#include "GizmoBaseTransformSource.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseTransformSource : public UObject, public IGizmoTransformSource {
    GENERATED_BODY()
public:
    UGizmoBaseTransformSource();
};

