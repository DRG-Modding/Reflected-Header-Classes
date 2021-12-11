#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE: MovieScene MovieSceneIntegerChannel
//CROSS-MODULE INCLUDE: MovieScene EMovieSceneBlendType
#include "MovieSceneIntegerPropertySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneIntegerPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneIntegerChannel IntegerCurve;
    
    UPROPERTY()
    EMovieSceneBlendType BlendType;
    
public:
    MOVIESCENETRACKS_API FMovieSceneIntegerPropertySectionTemplate();
};

