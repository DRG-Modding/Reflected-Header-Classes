#pragma once
#include "CoreMinimal.h"
#include "MovieSceneActorReferenceKey.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneChannel -FallbackName=MovieSceneChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneActorReferenceData.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FMovieSceneActorReferenceData : public FMovieSceneChannel {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> KeyTimes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneActorReferenceKey DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneActorReferenceKey> KeyValues;
    
public:
    FMovieSceneActorReferenceData();
};

