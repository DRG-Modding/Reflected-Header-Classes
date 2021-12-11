#pragma once
#include "CoreMinimal.h"
#include "MovieSceneChannel.h"
//CROSS-MODULE INCLUDE: Engine ERichCurveExtrapolation
#include "MovieSceneKeyHandleMap.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneFloatValue.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameRate
#include "MovieSceneFloatChannel.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENE_API FMovieSceneFloatChannel : public FMovieSceneChannel {
    GENERATED_BODY()
public:
    UPROPERTY()
    TEnumAsByte<ERichCurveExtrapolation> PreInfinityExtrap;
    
    UPROPERTY()
    TEnumAsByte<ERichCurveExtrapolation> PostInfinityExtrap;
    
private:
    UPROPERTY()
    TArray<FFrameNumber> Times;
    
    UPROPERTY()
    TArray<FMovieSceneFloatValue> Values;
    
    UPROPERTY()
    float DefaultValue;
    
    UPROPERTY()
    bool bHasDefaultValue;
    
    UPROPERTY(Transient)
    FMovieSceneKeyHandleMap KeyHandles;
    
    UPROPERTY()
    FFrameRate TickResolution;
    
public:
    FMovieSceneFloatChannel();
};

