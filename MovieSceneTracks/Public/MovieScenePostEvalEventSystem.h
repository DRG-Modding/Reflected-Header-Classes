#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventSystem.h"
#include "MovieScenePostEvalEventSystem.generated.h"

UCLASS()
class MOVIESCENETRACKS_API UMovieScenePostEvalEventSystem : public UMovieSceneEventSystem {
    GENERATED_BODY()
public:
    UMovieScenePostEvalEventSystem();
};

