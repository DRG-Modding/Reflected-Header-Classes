#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceLoopCount.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceLoopCount {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 Value;
    
    MOVIESCENE_API FMovieSceneSequenceLoopCount();
};

