#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNiagaraParameterTrack.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneTrackTemplateProducer -FallbackName=MovieSceneTrackTemplateProducer
#include "MovieSceneNiagaraIntegerParameterTrack.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneNiagaraIntegerParameterTrack : public UMovieSceneNiagaraParameterTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UMovieSceneNiagaraIntegerParameterTrack();
    
    // Fix for true pure virtual functions not being implemented
};

