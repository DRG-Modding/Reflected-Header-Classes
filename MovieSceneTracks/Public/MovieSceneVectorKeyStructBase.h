#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneKeyStruct -FallbackName=MovieSceneKeyStruct
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneVectorKeyStructBase.generated.h"

USTRUCT()
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber Time;
    
    MOVIESCENETRACKS_API FMovieSceneVectorKeyStructBase();
};

