#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE: MovieScene MovieSceneByteChannel
#include "MovieSceneBytePropertySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneBytePropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneByteChannel ByteCurve;
    
public:
    MOVIESCENETRACKS_API FMovieSceneBytePropertySectionTemplate();
};

