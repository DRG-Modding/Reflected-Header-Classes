#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackLabels.generated.h"

USTRUCT()
struct FMovieSceneTrackLabels {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FString> Strings;
    
    MOVIESCENE_API FMovieSceneTrackLabels();
};

