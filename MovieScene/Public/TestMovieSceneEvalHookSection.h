#pragma once
#include "CoreMinimal.h"
#include "MovieSceneHookSection.h"
#include "TestMovieSceneEvalHookSection.generated.h"

UCLASS(MinimalAPI)
class UTestMovieSceneEvalHookSection : public UMovieSceneHookSection {
    GENERATED_BODY()
public:
    UTestMovieSceneEvalHookSection();
};

