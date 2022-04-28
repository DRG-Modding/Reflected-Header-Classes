#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNiagaraParameterSectionTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieSceneNiagaraFloatParameterSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneNiagaraFloatParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel FloatChannel;
    
public:
    NIAGARA_API FMovieSceneNiagaraFloatParameterSectionTemplate();
};

