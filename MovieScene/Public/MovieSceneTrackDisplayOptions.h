#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackDisplayOptions.generated.h"

USTRUCT()
struct FMovieSceneTrackDisplayOptions {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bShowVerticalFrames: 1;
    
    MOVIESCENE_API FMovieSceneTrackDisplayOptions();
};

