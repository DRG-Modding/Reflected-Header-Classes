#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNiagaraParameterSectionTemplate.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
#include "MovieSceneNiagaraColorParameterSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneNiagaraColorParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneFloatChannel RedChannel;
    
    UPROPERTY()
    FMovieSceneFloatChannel GreenChannel;
    
    UPROPERTY()
    FMovieSceneFloatChannel BlueChannel;
    
    UPROPERTY()
    FMovieSceneFloatChannel AlphaChannel;
    
public:
    NIAGARA_API FMovieSceneNiagaraColorParameterSectionTemplate();
};

