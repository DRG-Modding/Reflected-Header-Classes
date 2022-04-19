#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheTrack.h"
#include "GeometryCacheMeshData.h"
#include "GeometryCacheTrack_TransformGroupAnimation.generated.h"

UCLASS(CollapseCategories, Deprecated, NotPlaceable)
class GEOMETRYCACHE_API UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation : public UGeometryCacheTrack {
    GENERATED_BODY()
public:
    UDEPRECATED_GeometryCacheTrack_TransformGroupAnimation();
    UFUNCTION(BlueprintCallable)
    void SetMesh(const FGeometryCacheMeshData& NewMeshData);
    
};

