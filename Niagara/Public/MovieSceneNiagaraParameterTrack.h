#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNiagaraTrack.h"
#include "NiagaraVariable.h"
#include "MovieSceneNiagaraParameterTrack.generated.h"

UCLASS(Abstract, MinimalAPI)
class UMovieSceneNiagaraParameterTrack : public UMovieSceneNiagaraTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FNiagaraVariable Parameter;
    
public:
    UMovieSceneNiagaraParameterTrack();
};

