#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheTrack.h"
#include "GeometryCacheMeshData.h"
#include "GeometryCacheTrack_TransformGroupAnimation.generated.h"

UCLASS(CollapseCategories, Deprecated, NotPlaceable)
class GEOMETRYCACHE_API UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack {
    GENERATED_BODY()
public:
    UFUNCTION()
    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
    
    UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation();
};

