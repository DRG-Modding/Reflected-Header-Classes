#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheTrack.h"
#include "GeometryCacheMeshData.h"
#include "GeometryCacheTrack_FlipbookAnimation.generated.h"

UCLASS(CollapseCategories, Deprecated, NotPlaceable)
class GEOMETRYCACHE_API UDEPRECATED_GeometryCacheTrack_FlipbookAnimation : public UGeometryCacheTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint32 NumMeshSamples;
    
public:
    UDEPRECATED_GeometryCacheTrack_FlipbookAnimation();
    UFUNCTION(BlueprintCallable)
    void AddMeshSample(const FGeometryCacheMeshData& MeshData, const float SampleTime);
    
};

