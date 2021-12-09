#pragma once
#include "CoreMinimal.h"
#include "MovieSceneChannel.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneByteChannel.generated.h"

class UEnum;

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneByteChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    TArray<FFrameNumber> Times;
    
    UPROPERTY()
    uint8 DefaultValue;
    
    UPROPERTY()
    bool bHasDefaultValue;
    
    UPROPERTY()
    TArray<uint8> Values;
    
    UPROPERTY()
    UEnum* Enum;
    
public:
    FMovieSceneByteChannel();
};

