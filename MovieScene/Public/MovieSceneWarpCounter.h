#pragma once
#include "CoreMinimal.h"
#include "MovieSceneWarpCounter.generated.h"

USTRUCT()
struct FMovieSceneWarpCounter {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<uint32> WarpCounts;
    
    MOVIESCENE_API FMovieSceneWarpCounter();
};

