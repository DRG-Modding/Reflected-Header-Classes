#pragma once
#include "CoreMinimal.h"
#include "MovieSceneFloatTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneFadeTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneFadeTrack : public UMovieSceneFloatTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneFadeTrack();
    
    // Fix for true pure virtual functions not being implemented
};

