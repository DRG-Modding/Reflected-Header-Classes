#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "EMovieScenePlayerStatus.h"
#include "MovieSceneSequenceReplProperties.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceReplProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFrameTime LastKnownPosition;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TEnumAsByte<EMovieScenePlayerStatus::Type> LastKnownStatus;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 LastKnownNumLoops;
    
    MOVIESCENE_API FMovieSceneSequenceReplProperties();
};

