#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneTransformMask.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
#include "MovieScene3DTransformSection.generated.h"

UCLASS(MinimalAPI)
class UMovieScene3DTransformSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneTransformMask TransformMask;
    
    UPROPERTY()
    FMovieSceneFloatChannel Translation[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel Rotation[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel Scale[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel ManualWeight;
    
    UPROPERTY(EditAnywhere)
    bool bUseQuaternionInterpolation;
    
public:
    UMovieScene3DTransformSection();
};

