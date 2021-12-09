#pragma once
#include "CoreMinimal.h"
#include "InteractiveToolBuilder.h"
#include "ClickDragToolBuilder.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UClickDragToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UClickDragToolBuilder();
};

