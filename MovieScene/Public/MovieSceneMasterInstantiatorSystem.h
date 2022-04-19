#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityInstantiatorSystem.h"
#include "MovieSceneMasterInstantiatorSystem.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneMasterInstantiatorSystem : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneMasterInstantiatorSystem();
};

