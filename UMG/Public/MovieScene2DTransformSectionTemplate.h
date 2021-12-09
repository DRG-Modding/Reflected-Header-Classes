#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene EMovieSceneBlendType
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
//CROSS-MODULE INCLUDE: MovieScene MovieScenePropertySectionTemplate
#include "MovieScene2DTransformMask.h"
#include "MovieScene2DTransformSectionTemplate.generated.h"

USTRUCT()
struct FMovieScene2DTransformSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneFloatChannel Translation[2];
    
    UPROPERTY()
    FMovieSceneFloatChannel Rotation;
    
    UPROPERTY()
    FMovieSceneFloatChannel Scale[2];
    
    UPROPERTY()
    FMovieSceneFloatChannel Shear[2];
    
    UPROPERTY()
    EMovieSceneBlendType BlendType;
    
    UPROPERTY()
    FMovieScene2DTransformMask Mask;
    
public:
    UMG_API FMovieScene2DTransformSectionTemplate();
};

