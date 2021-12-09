#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneChannel
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "EventPayload.h"
#include "MovieSceneEventSectionData.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FMovieSceneEventSectionData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> Times;
    
    UPROPERTY()
    TArray<FEventPayload> KeyValues;
    
public:
    FMovieSceneEventSectionData();
};

