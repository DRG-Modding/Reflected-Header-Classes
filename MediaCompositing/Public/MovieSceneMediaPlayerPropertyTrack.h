#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieSceneTracks -ObjectName=MovieScenePropertyTrack -FallbackName=MovieScenePropertyTrack
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneMediaPlayerPropertyTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneMediaPlayerPropertyTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneMediaPlayerPropertyTrack();
    
    // Fix for true pure virtual functions not being implemented
};

