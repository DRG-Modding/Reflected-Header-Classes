#pragma once
#include "CoreMinimal.h"
#include "EMovieScenePlayerStatus.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameTime -FallbackName=FrameTime
#include "MovieSceneSequenceReplProperties.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSequenceReplProperties {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FFrameTime LastKnownPosition;
    
    UPROPERTY(EditAnywhere)
    TEnumAsByte<EMovieScenePlayerStatus::Type> LastKnownStatus;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LastKnownNumLoops;
    
    MOVIESCENE_API FMovieSceneSequenceReplProperties();
};

