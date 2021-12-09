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
    UPROPERTY()
    EMovieSceneCompletionMode CompletionMode;
    
    UPROPERTY(Export)
    TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr;
    
public:
    MOVIESCENE_API FMovieSceneEvalTemplate();
};

