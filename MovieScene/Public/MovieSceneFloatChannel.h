#pragma once
#include "CoreMinimal.h"
#include "MovieSceneChannel.h"
#include "MovieSceneKeyHandleMap.h"
#include "MovieSceneFloatValue.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ERichCurveExtrapolation -FallbackName=ERichCurveExtrapolation
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameRate -FallbackName=FrameRate
#include "MovieSceneFloatChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneFloatChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FFrameNumber> Times;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMovieSceneFloatValue> Values;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float DefaultValue;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bHasDefaultValue;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    FMovieSceneKeyHandleMap KeyHandles;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFrameRate TickResolution;
    
public:
    FMovieSceneFloatChannel();
};

