#pragma once
#include "CoreMinimal.h"
#include "ENDISkelMesh_AdjacencyTriangleIndexFormat.generated.h"

UENUM()
namespace ENDISkelMesh_AdjacencyTriangleIndexFormat {
    enum Type {
        Full,
        Half,
        ENDISkelMesh_MAX UMETA(Hidden),
    };
}

