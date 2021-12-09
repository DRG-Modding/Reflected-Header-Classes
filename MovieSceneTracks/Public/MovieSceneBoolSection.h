#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
//CROSS-MODULE INCLUDE: MovieScene MovieSceneBoolChannel
#include "MovieSceneBoolSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneBoolSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool DefaultValue;
    
protected:
    UPROPERTY()
    FMovieSceneBoolChannel BoolCurve;
    
public:
    UMovieSceneBoolSection();
};

