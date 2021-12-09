#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneChannel
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneActorReferenceKey.h"
#include "MovieSceneActorReferenceData.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FMovieSceneActorReferenceData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY()
    TArray<FMovieSceneActorReferenceKey> KeyValues;
    
public:
    FMovieSceneActorReferenceData();
};

