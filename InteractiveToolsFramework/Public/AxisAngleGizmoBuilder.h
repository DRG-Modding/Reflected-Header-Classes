#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "AxisAngleGizmoBuilder.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UAxisAngleGizmoBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UAxisAngleGizmoBuilder();
};

