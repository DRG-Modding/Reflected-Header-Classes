#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertyTrack.h"
#include "MovieSceneObjectPropertyTrack.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneObjectPropertyTrack : public UMovieScenePropertyTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClass* PropertyClass;
    
    UMovieSceneObjectPropertyTrack();
};

