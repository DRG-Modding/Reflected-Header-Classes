#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieScenePropertySectionTemplate
#include "MovieSceneStringChannel.h"
#include "MovieSceneStringPropertySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneStringChannel StringCurve;
    
public:
    MOVIESCENETRACKS_API FMovieSceneStringPropertySectionTemplate();
};

