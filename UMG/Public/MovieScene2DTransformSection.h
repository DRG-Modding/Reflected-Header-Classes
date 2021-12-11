#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
#include "MovieScene2DTransformMask.h"
#include "MovieScene2DTransformSection.generated.h"

UCLASS(MinimalAPI)
class UMovieScene2DTransformSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieScene2DTransformMask TransformMask;
    
    UPROPERTY()
    FMovieSceneFloatChannel Translation[2];
    
    UPROPERTY()
    FMovieSceneFloatChannel Rotation;
    
    UPROPERTY()
    FMovieSceneFloatChannel Scale[2];
    
    UPROPERTY()
    FMovieSceneFloatChannel Shear[2];
    
    UMovieScene2DTransformSection();
};

