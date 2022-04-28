#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNiagaraTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneNiagaraSystemTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneNiagaraSystemTrack : public UMovieSceneNiagaraTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneNiagaraSystemTrack();
    
    // Fix for true pure virtual functions not being implemented
};

