#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
#include "NiagaraVariable.h"
#include "MovieSceneNiagaraParameterSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneNiagaraParameterSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FNiagaraVariable Parameter;
    
public:
    NIAGARA_API FMovieSceneNiagaraParameterSectionTemplate();
};

