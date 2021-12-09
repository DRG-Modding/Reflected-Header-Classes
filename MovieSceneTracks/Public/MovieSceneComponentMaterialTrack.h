#pragma once
#include "CoreMinimal.h"
#include "MovieSceneMaterialTrack.h"
#include "MovieSceneComponentMaterialTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneComponentMaterialTrack : public UMovieSceneMaterialTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 MaterialIndex;
    
public:
    UMovieSceneComponentMaterialTrack();
};

