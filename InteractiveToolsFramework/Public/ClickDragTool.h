#pragma once
#include "CoreMinimal.h"
#include "InteractiveTool.h"
#include "ClickDragTool.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UClickDragTool : public UInteractiveTool {
    GENERATED_BODY()
public:
    UClickDragTool();
};

