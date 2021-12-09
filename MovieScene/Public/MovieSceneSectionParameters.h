#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneSectionParameters.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSectionParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bCanLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameNumber EndFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FFrameNumber FirstLoopStartFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TimeScale;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 HierarchicalBias;
    
    UPROPERTY()
    float StartOffset;
    
    UPROPERTY()
    float PrerollTime;
    
    UPROPERTY()
    float PostrollTime;
    
    MOVIESCENE_API FMovieSceneSectionParameters();
};

