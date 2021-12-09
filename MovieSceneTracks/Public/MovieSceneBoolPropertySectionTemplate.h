#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE: MovieScene MovieSceneBoolChannel
#include "MovieSceneBoolPropertySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneBoolPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneBoolChannel BoolCurve;
    
public:
    MOVIESCENETRACKS_API FMovieSceneBoolPropertySectionTemplate();
};

