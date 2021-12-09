#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine NavigationDataChunk
#include "RecastNavMeshDataChunk.generated.h"

UCLASS()
class NAVIGATIONSYSTEM_API URecastNavMeshDataChunk : public UNavigationDataChunk {
    GENERATED_BODY()
public:
    URecastNavMeshDataChunk();
};

