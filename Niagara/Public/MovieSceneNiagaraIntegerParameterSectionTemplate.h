#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNiagaraParameterSectionTemplate.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneIntegerChannel
#include "MovieSceneNiagaraIntegerParameterSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneNiagaraIntegerParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneIntegerChannel IntegerChannel;
    
public:
    NIAGARA_API FMovieSceneNiagaraIntegerParameterSectionTemplate();
};

