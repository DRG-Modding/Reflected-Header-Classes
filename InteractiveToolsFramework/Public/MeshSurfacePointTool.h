#pragma once
#include "CoreMinimal.h"
#include "SingleSelectionTool.h"
#include "MeshSurfacePointTool.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UMeshSurfacePointTool : public USingleSelectionTool {
    GENERATED_BODY()
public:
    UMeshSurfacePointTool();
};

