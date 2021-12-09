#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSegmentIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSegmentIdentifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    int32 IdentifierIndex;
    
public:
    MOVIESCENE_API FMovieSceneSegmentIdentifier();
};

