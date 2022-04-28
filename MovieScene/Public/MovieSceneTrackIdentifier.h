#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrackIdentifier.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTrackIdentifier {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    uint32 Value;
    
public:
    MOVIESCENE_API FMovieSceneTrackIdentifier();
};

