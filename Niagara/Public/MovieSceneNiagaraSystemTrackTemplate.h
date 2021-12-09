#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
#include "MovieSceneNiagaraSystemTrackTemplate.generated.h"

USTRUCT()
struct FMovieSceneNiagaraSystemTrackTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    NIAGARA_API FMovieSceneNiagaraSystemTrackTemplate();
};

