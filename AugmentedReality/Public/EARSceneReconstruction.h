#pragma once
#include "CoreMinimal.h"
#include "EARSceneReconstruction.generated.h"

UENUM()
enum class EARSceneReconstruction : uint8 {
    None,
    MeshOnly,
    MeshWithClassification,
};

