#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEntityProvider.h"
#include "MovieSceneBoolSection.h"
#include "MovieSceneSpawnSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieSceneSpawnSection : public UMovieSceneBoolSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UMovieSceneSpawnSection();
    
    // Fix for true pure virtual functions not being implemented
};

