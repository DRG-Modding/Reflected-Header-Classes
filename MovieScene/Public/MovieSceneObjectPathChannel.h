#pragma once
#include "CoreMinimal.h"
#include "MovieSceneChannel.h"
#include "MovieSceneObjectPathChannelKeyValue.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneObjectPathChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneObjectPathChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    UClass* PropertyClass;
    
    UPROPERTY()
    TArray<FFrameNumber> Times;
    
    UPROPERTY()
    TArray<FMovieSceneObjectPathChannelKeyValue> Values;
    
    UPROPERTY()
    FMovieSceneObjectPathChannelKeyValue DefaultValue;
    
public:
    FMovieSceneObjectPathChannel();
};

