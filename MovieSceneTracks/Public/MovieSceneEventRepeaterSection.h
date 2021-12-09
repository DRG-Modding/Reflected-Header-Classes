#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventSectionBase.h"
#include "MovieSceneEvent.h"
#include "MovieSceneEventRepeaterSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneEventRepeaterSection : public UMovieSceneEventSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneEvent Event;
    
    UMovieSceneEventRepeaterSection();
};

