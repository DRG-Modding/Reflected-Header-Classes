#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneStringTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneStringTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneStringTrack();
    
    // Fix for true pure virtual functions not being implemented
};

