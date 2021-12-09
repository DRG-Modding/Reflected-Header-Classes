#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheTrack.h"
#include "GeometryCacheTrackStreamable.generated.h"

class UGeometryCacheCodecBase;

UCLASS(CollapseCategories)
class GEOMETRYCACHE_API UGeometryCacheTrackStreamable : public UGeometryCacheTrack {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    UGeometryCacheCodecBase* Codec;
    
private:
    UPROPERTY()
    float StartSampleTime;
    
public:
    UGeometryCacheTrackStreamable();
};

