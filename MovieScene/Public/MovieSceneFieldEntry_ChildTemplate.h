#pragma once
#include "CoreMinimal.h"
#include "ESectionEvaluationFlags.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=FrameNumber -FallbackName=FrameNumber
#include "MovieSceneFieldEntry_ChildTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneFieldEntry_ChildTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint16 ChildIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ESectionEvaluationFlags Flags;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FFrameNumber ForcedTime;
    
    MOVIESCENE_API FMovieSceneFieldEntry_ChildTemplate();
};

