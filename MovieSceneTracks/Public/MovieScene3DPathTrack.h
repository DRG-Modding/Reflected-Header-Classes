#pragma once
#include "CoreMinimal.h"
#include "MovieScene3DConstraintTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieScene3DPathTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieScene3DPathTrack : public UMovieScene3DConstraintTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieScene3DPathTrack();
    
    // Fix for true pure virtual functions not being implemented
};

