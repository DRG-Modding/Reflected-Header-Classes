#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene EMovieSceneBlendType
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
//CROSS-MODULE INCLUDE: MovieScene MovieScenePropertySectionTemplate
#include "MovieSceneColorSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneFloatChannel Curves[4];
    
    UPROPERTY()
    EMovieSceneBlendType BlendType;
    
    MOVIESCENETRACKS_API FMovieSceneColorSectionTemplate();
};

