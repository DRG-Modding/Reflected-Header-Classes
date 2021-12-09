#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE: MovieScene MovieSceneObjectPathChannel
#include "MovieSceneObjectPropertyTemplate.generated.h"

USTRUCT()
struct FMovieSceneObjectPropertyTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneObjectPathChannel ObjectChannel;
    
public:
    MOVIESCENETRACKS_API FMovieSceneObjectPropertyTemplate();
};

