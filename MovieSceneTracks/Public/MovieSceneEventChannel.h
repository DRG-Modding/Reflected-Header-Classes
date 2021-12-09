#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneChannel
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneEvent.h"
#include "MovieSceneEventChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FMovieSceneEventChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY()
    TArray<FMovieSceneEvent> KeyValues;
    
public:
    FMovieSceneEventChannel();
};

