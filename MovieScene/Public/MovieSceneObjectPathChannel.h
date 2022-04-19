#pragma once
#include "CoreMinimal.h"
#include "MovieSceneChannel.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneObjectPathChannelKeyValue.h"
#include "MovieSceneObjectPathChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneObjectPathChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UClass* PropertyClass;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneObjectPathChannelKeyValue> Values;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneObjectPathChannelKeyValue DefaultValue;
    
public:
    FMovieSceneObjectPathChannel();
};

