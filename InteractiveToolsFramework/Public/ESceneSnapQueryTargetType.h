#pragma once
#include "CoreMinimal.h"
#include "ESceneSnapQueryTargetType.generated.h"

UENUM()
enum class ESceneSnapQueryTargetType {
    None,
    MeshVertex,
    MeshEdge,
    Grid = 0x4,
    All = 0x7,
};

