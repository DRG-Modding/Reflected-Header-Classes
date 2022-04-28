#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheTrack.h"
#include "GeometryCacheMeshData.h"
#include "GeometryCacheTrack_FlipbookAnimation.generated.h"

UCLASS(Blueprintable, CollapseCategories, Deprecated, NotPlaceable)
class GEOMETRYCACHE_API UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint32 NumMeshSamples;
    
public:
    UDEPRECATED_GeometryCacheTrack_FlipbookAnimation();
    UFUNCTION()
    void AddMeshSample(const FGeometryCacheMeshData& MeshData, const float SampleTime);
    
};

