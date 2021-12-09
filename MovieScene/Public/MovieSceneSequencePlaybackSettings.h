#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSequenceLoopCount.h"
#include "MovieSceneSequencePlaybackSettings.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequencePlaybackSettings {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bAutoPlay: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMovieSceneSequenceLoopCount LoopCount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PlayRate;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float StartTime;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRandomStartTime: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bRestoreState: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDisableMovementInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDisableLookAtInput: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bHidePlayer: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bHideHud: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bDisableCameraCuts: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bPauseAtEnd: 1;
    
    MOVIESCENE_API FMovieSceneSequencePlaybackSettings();
};

