#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvalTemplateBase.h"
#include "EMovieSceneCompletionMode.h"
#include "MovieSceneEvalTemplate.generated.h"

class UMovieSceneSection;

USTRUCT()
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EMovieSceneCompletionMode CompletionMode;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr;
    
public:
    MOVIESCENE_API FMovieSceneEvalTemplate();
};

