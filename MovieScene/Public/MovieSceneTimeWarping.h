#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneTimeWarping.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTimeWarping {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFrameNumber Start;
    
    UPROPERTY()
    FFrameNumber End;
    
    MOVIESCENE_API FMovieSceneTimeWarping();
};

