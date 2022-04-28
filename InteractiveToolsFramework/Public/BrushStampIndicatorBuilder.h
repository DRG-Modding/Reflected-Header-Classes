#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmoBuilder.h"
#include "BrushStampIndicatorBuilder.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UBrushStampIndicatorBuilder : public UInteractiveGizmoBuilder {
    GENERATED_BODY()
public:
    UBrushStampIndicatorBuilder();
};

