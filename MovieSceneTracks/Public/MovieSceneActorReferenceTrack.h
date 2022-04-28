#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneActorReferenceTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneActorReferenceTrack : public UMovieScenePropertyTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneActorReferenceTrack();
    
    // Fix for true pure virtual functions not being implemented
};

