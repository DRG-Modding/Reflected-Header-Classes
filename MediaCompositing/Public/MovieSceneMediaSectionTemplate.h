#pragma once
#include "CoreMinimal.h"
#include "MovieSceneMediaSectionParams.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneMediaSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneMediaSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneMediaSectionParams Params;
    
public:
    MEDIACOMPOSITING_API FMovieSceneMediaSectionTemplate();
};

