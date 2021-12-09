#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNiagaraParameterSectionTemplate.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneBoolChannel
#include "MovieSceneNiagaraBoolParameterSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneBoolChannel BoolChannel;
    
public:
    NIAGARA_API FMovieSceneNiagaraBoolParameterSectionTemplate();
};

