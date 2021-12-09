#pragma once
#include "CoreMinimal.h"
#include "EMovieSceneCompletionMode.h"
#include "MovieSceneSectionEvalOptions.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSectionEvalOptions {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bCanEditCompletionMode;
    
    UPROPERTY(EditAnywhere)
    EMovieSceneCompletionMode CompletionMode;
    
    MOVIESCENE_API FMovieSceneSectionEvalOptions();
};

