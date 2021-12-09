#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneMarkedFrame.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneMarkedFrame {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameNumber FrameNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FString Label;
    
    MOVIESCENE_API FMovieSceneMarkedFrame();
};

