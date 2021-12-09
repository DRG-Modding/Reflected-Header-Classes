#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneSection
//CROSS-MODULE INCLUDE: Engine NameCurve
#include "MovieSceneEventSectionData.h"
#include "MovieSceneEventSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneEventSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FNameCurve Events;
    
    UPROPERTY()
    FMovieSceneEventSectionData EventData;
    
public:
    UMovieSceneEventSection();
};

