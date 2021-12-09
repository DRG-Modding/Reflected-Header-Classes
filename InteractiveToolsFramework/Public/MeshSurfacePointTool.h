#pragma once
#include "CoreMinimal.h"
#include "SingleSelectionTool.h"
#include "MeshSurfacePointTool.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UMeshSurfacePointTool : public USingleSelectionTool {
    GENERATED_BODY()
public:
    UMeshSurfacePointTool();
};

