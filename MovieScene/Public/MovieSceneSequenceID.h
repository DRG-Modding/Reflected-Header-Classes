#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceID.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceID {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    uint32 Value;
    
public:
    MOVIESCENE_API FMovieSceneSequenceID();
};

