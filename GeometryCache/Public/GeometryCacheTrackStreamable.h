#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheTrack.h"
#include "GeometryCacheTrackStreamable.generated.h"

class UGeometryCacheCodecBase;

UCLASS(CollapseCategories)
class GEOMETRYCACHE_API UGeometryCacheTrackStreamable : public UGeometryCacheTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCacheCodecBase* Codec;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float StartSampleTime;
    
public:
    UGeometryCacheTrackStreamable();
};

