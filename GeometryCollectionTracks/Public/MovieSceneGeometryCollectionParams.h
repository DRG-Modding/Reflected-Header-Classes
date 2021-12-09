#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject SoftObjectPath
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneGeometryCollectionParams.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneGeometryCollectionParams {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FSoftObjectPath GeometryCollectionCache;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(EditAnywhere)
    FFrameNumber EndFrameOffset;
    
    UPROPERTY(EditAnywhere)
    float PlayRate;
    
    GEOMETRYCOLLECTIONTRACKS_API FMovieSceneGeometryCollectionParams();
};

