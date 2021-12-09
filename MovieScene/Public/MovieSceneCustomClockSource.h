#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject QualifiedFrameTime
//CROSS-MODULE INCLUDE: CoreUObject Interface
//CROSS-MODULE INCLUDE: CoreUObject FrameTime
#include "MovieSceneCustomClockSource.generated.h"

UINTERFACE()
class MOVIESCENE_API UMovieSceneCustomClockSource : public UInterface {
    GENERATED_BODY()
};

class MOVIESCENE_API IMovieSceneCustomClockSource : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION()
    virtual void OnTick(float DeltaSeconds, float InPlayRate) PURE_VIRTUAL(OnTick,);
    
    UFUNCTION()
    virtual void OnStopPlaying(const FQualifiedFrameTime& InStopTime) PURE_VIRTUAL(OnStopPlaying,);
    
    UFUNCTION()
    virtual void OnStartPlaying(const FQualifiedFrameTime& InStartTime) PURE_VIRTUAL(OnStartPlaying,);
    
    UFUNCTION()
    virtual  return FFrameTime{}; OnRequestCurrentTime(const FQualifiedFrameTime& InCurrentTime, float InPlayRate) PURE_VIRTUAL(OnRequestCurrentTime,);
    
};

