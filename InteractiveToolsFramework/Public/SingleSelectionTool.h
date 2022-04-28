#pragma once
#include "CoreMinimal.h"
#include "InteractiveTool.h"
#include "SingleSelectionTool.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API USingleSelectionTool : public UInteractiveTool {
    GENERATED_BODY()
public:
    USingleSelectionTool();
};

