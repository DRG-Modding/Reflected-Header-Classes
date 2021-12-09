#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Timecode
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneTimecodeSource.generated.h"

USTRUCT()
struct FMovieSceneTimecodeSource {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FTimecode Timecode;
    
    UPROPERTY(VisibleAnywhere)
    FFrameNumber DeltaFrame;
    
    MOVIESCENE_API FMovieSceneTimecodeSource();
};

