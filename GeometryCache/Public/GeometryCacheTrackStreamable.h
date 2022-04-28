#pragma once
#include "CoreMinimal.h"
#include "GeometryCacheTrack.h"
#include "GeometryCacheTrackStreamable.generated.h"

class UGeometryCacheCodecBase;

UCLASS(Blueprintable, CollapseCategories)
class GEOMETRYCACHE_API UGeometryCacheTrackStreamable : public UGeometryCacheTrack {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UGeometryCacheCodecBase* Codec;
    
private:
    UPROPERTY(EditAnywhere)
    float StartSampleTime;
    
public:
    UGeometryCacheTrackStreamable();
};

