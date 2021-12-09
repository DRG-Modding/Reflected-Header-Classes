#pragma once
#include "CoreMinimal.h"
#include "MovieSceneChannel.h"
#include "MovieSceneFloatValue.h"
//CROSS-MODULE INCLUDE: Engine ERichCurveExtrapolation
//CROSS-MODULE INCLUDE: CoreUObject FrameRate
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneKeyHandleMap.h"
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

