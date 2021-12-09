#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNiagaraParameterTrack.h"
#include "MovieSceneNiagaraVectorParameterTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneNiagaraVectorParameterTrack : public UMovieSceneNiagaraParameterTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 ChannelsUsed;
    
public:
    UMovieSceneNiagaraVectorParameterTrack();
};

