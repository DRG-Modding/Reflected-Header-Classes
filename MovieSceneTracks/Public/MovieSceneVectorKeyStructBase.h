#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneKeyStruct
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneVectorKeyStructBase.generated.h"

USTRUCT()
struct FMovieSceneVectorKeyStructBase : public FMovieSceneKeyStruct {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FFrameNumber Time;
    
    MOVIESCENETRACKS_API FMovieSceneVectorKeyStructBase();
};

