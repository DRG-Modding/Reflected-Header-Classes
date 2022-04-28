#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "PlanePositionGizmoBuilder.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UPlanePositionGizmoBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UPlanePositionGizmoBuilder();
};

