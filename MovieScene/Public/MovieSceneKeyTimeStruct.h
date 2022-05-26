#pragma once
#include "CoreMinimal.h"
#include "MovieSceneKeyStruct.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneKeyTimeStruct.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Time;
    
    MOVIESCENE_API FMovieSceneKeyTimeStruct();
};

