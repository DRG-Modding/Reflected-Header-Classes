#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneSectionParameters.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSectionParameters {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber StartFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bCanLoop;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber EndFrameOffset;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameNumber FirstLoopStartFrameOffset;
    
    UPROPERTY(EditAnywhere)
    float TimeScale;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 HierarchicalBias;
    
    UPROPERTY(EditAnywhere)
    float StartOffset;
    
    UPROPERTY(EditAnywhere)
    float PrerollTime;
    
    UPROPERTY(EditAnywhere)
    float PostrollTime;
    
    MOVIESCENE_API FMovieSceneSectionParameters();
};

