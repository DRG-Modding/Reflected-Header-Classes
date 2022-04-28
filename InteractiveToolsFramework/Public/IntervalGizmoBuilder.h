#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "IntervalGizmoBuilder.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UIntervalGizmoBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UIntervalGizmoBuilder();
};

