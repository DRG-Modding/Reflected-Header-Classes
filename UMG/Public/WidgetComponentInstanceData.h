#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponentInstanceData
#include "WidgetComponentInstanceData.generated.h"

USTRUCT()
struct FWidgetComponentInstanceData : public FSceneComponentInstanceData {
    GENERATED_BODY()
public:
    UMG_API FWidgetComponentInstanceData();
};

