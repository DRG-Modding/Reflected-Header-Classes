#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: GeometryCollectionCore EGeometryCollectionCacheType
#include "GeomComponentCacheParameters.generated.h"

class UGeometryCollectionCache;

USTRUCT(BlueprintType)
struct FGeomComponentCacheParameters {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EGeometryCollectionCacheType CacheMode;
    
    UPROPERTY(EditAnywhere)
    UGeometryCollectionCache* TargetCache;
    
    UPROPERTY(EditAnywhere)
    float ReverseCacheBeginTime;
    
    UPROPERTY(EditAnywhere)
    bool SaveCollisionData;
    
    UPROPERTY(EditAnywhere)
    bool DoGenerateCollisionData;
    
    UPROPERTY(EditAnywhere)
    int32 CollisionDataSizeMax;
    
    UPROPERTY(EditAnywhere)
    bool DoCollisionDataSpatialHash;
    
    UPROPERTY(EditAnywhere)
    float CollisionDataSpatialHashRadius;
    
    UPROPERTY(EditAnywhere)
    int32 MaxCollisionPerCell;
    
    UPROPERTY(EditAnywhere)
    bool SaveBreakingData;
    
    UPROPERTY(EditAnywhere)
    bool DoGenerateBreakingData;
    
    UPROPERTY(EditAnywhere)
    int32 BreakingDataSizeMax;
    
    UPROPERTY(EditAnywhere)
    bool DoBreakingDataSpatialHash;
    
    UPROPERTY(EditAnywhere)
    float BreakingDataSpatialHashRadius;
    
    UPROPERTY(EditAnywhere)
    int32 MaxBreakingPerCell;
    
    UPROPERTY(EditAnywhere)
    bool SaveTrailingData;
    
    UPROPERTY(EditAnywhere)
    bool DoGenerateTrailingData;
    
    UPROPERTY(EditAnywhere)
    int32 TrailingDataSizeMax;
    
    UPROPERTY(EditAnywhere)
    float TrailingMinSpeedThreshold;
    
    UPROPERTY(EditAnywhere)
    float TrailingMinVolumeThreshold;
    
    GEOMETRYCOLLECTIONENGINE_API FGeomComponentCacheParameters();
};

