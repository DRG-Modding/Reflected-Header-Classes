#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvalTemplateBase.h"
#include "EMovieSceneCompletionMode.h"
#include "MovieSceneEvalTemplate.generated.h"

class UMovieSceneSection;

USTRUCT(BlueprintType)
struct FMovieSceneEvalTemplate : public FMovieSceneEvalTemplateBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneCompletionMode CompletionMode;
    
    UPROPERTY(EditAnywhere, Export)
    TWeakObjectPtr<UMovieSceneSection> SourceSectionPtr;
    
public:
    MOVIESCENE_API FMovieSceneEvalTemplate();
};

