#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityInstantiatorSystem.h"
#include "MovieSceneBoundSceneComponentInstantiator.generated.h"

UCLASS()
class MOVIESCENE_API UMovieSceneBoundSceneComponentInstantiator : public UMovieSceneEntityInstantiatorSystem {
    GENERATED_BODY()
public:
    UMovieSceneBoundSceneComponentInstantiator();
};

