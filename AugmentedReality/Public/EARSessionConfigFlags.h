#pragma once
#include "CoreMinimal.h"
#include "EARSessionConfigFlags.generated.h"

UENUM()
enum class EARSessionConfigFlags {
    None,
    GenerateMeshData,
    RenderMeshDataInWireframe,
    GenerateCollisionForMeshData = 0x4,
    GenerateNavMeshForMeshData = 0x8,
    UseMeshDataForOcclusion = 0x10,
};

