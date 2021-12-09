#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvalTemplate.h"
#include "TestMovieSceneEvalTemplate.generated.h"

USTRUCT()
struct FTestMovieSceneEvalTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    MOVIESCENE_API FTestMovieSceneEvalTemplate();
};

