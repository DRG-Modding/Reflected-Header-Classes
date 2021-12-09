#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieScenePrimitiveMaterialTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieScenePrimitiveMaterialTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    int32 MaterialIndex;
    
    UMovieScenePrimitiveMaterialTrack();
};

