#pragma once
#include "CoreMinimal.h"
#include "MovieSceneKeyStruct.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneKeyTimeStruct.generated.h"

USTRUCT()
struct FMovieSceneKeyTimeStruct : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFrameNumber Time;
    
    MOVIESCENE_API FMovieSceneKeyTimeStruct();
};

