#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "TransformGizmoBuilder.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UTransformGizmoBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UTransformGizmoBuilder();
};

