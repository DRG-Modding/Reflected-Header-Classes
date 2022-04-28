#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "AxisPositionGizmoBuilder.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UAxisPositionGizmoBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UAxisPositionGizmoBuilder();
};

