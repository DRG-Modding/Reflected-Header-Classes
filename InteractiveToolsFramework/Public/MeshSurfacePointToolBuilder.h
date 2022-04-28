#pragma once
#include "CoreMinimal.h"
#include "InteractiveToolBuilder.h"
#include "MeshSurfacePointToolBuilder.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UMeshSurfacePointToolBuilder : public UInteractiveToolBuilder {
    GENERATED_BODY()
public:
    UMeshSurfacePointToolBuilder();
};

