#pragma once
#include "CoreMinimal.h"
#include "InteractiveTool.h"
#include "SingleClickTool.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API USingleClickTool : public UInteractiveTool {
    GENERATED_BODY()
public:
    USingleClickTool();
};

