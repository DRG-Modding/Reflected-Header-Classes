#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventSystem.h"
#include "MovieScenePreSpawnEventSystem.generated.h"

UCLASS()
class MOVIESCENETRACKS_API UMovieScenePreSpawnEventSystem : public UMovieSceneEventSystem {
    GENERATED_BODY()
public:
    UMovieScenePreSpawnEventSystem();
};

