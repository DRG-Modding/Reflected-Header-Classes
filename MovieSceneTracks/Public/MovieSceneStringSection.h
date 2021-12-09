#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
#include "MovieSceneStringChannel.h"
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

