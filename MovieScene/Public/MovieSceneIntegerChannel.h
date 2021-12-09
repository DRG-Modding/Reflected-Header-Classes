#pragma once
#include "CoreMinimal.h"
#include "MovieSceneChannel.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneIntegerChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneIntegerChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> Times;
    
    UPROPERTY()
    int32 DefaultValue;
    
    UPROPERTY()
    bool bHasDefaultValue;
    
    UPROPERTY()
    TArray<int32> Values;
    
public:
    FMovieSceneIntegerChannel();
};

