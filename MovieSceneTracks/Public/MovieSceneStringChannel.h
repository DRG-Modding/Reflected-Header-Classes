#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneChannel
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneStringChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FMovieSceneStringChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> Times;
    
    UPROPERTY()
    TArray<FString> Values;
    
    UPROPERTY()
    FString DefaultValue;
    
    UPROPERTY()
    bool bHasDefaultValue;
    
public:
    FMovieSceneStringChannel();
};

