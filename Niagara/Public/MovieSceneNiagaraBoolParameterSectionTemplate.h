#pragma once
#include "CoreMinimal.h"
#include "MovieSceneNiagaraParameterSectionTemplate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneBoolChannel -FallbackName=MovieSceneBoolChannel
#include "MovieSceneNiagaraBoolParameterSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneNiagaraBoolParameterSectionTemplate : public FMovieSceneNiagaraParameterSectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel BoolChannel;
    
public:
    NIAGARA_API FMovieSceneNiagaraBoolParameterSectionTemplate();
};

