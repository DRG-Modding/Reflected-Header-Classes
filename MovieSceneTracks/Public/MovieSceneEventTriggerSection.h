#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventSectionBase.h"
#include "MovieSceneEventChannel.h"
#include "MovieSceneEventTriggerSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneEventTriggerSection : public UMovieSceneEventSectionBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneEventChannel EventChannel;
    
    UMovieSceneEventTriggerSection();
};

