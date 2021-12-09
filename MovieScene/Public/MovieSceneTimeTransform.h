#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameTime
#include "MovieSceneTimeTransform.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneTimeTransform {
    GENERATED_BODY()
public:
    UPROPERTY()
    float TimeScale;
    
    UPROPERTY()
    FFrameTime Offset;
    
    MOVIESCENE_API FMovieSceneTimeTransform();
};

