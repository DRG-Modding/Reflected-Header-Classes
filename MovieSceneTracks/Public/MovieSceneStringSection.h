#pragma once
#include "CoreMinimal.h"
#include "MovieSceneStringChannel.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneStringSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneStringSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneStringChannel StringCurve;
    
public:
    UMovieSceneStringSection();
};

