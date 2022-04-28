#pragma once
#include "CoreMinimal.h"
#include "MovieSceneWarpCounter.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneWarpCounter {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<uint32> WarpCounts;
    
    MOVIESCENE_API FMovieSceneWarpCounter();
};

