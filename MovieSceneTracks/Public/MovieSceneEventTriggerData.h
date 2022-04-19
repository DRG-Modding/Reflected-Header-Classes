#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventPtrs.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "MovieSceneEventTriggerData.generated.h"

USTRUCT()
struct FMovieSceneEventTriggerData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneEventPtrs Ptrs;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FGuid ObjectBindingId;
    
    MOVIESCENETRACKS_API FMovieSceneEventTriggerData();
};

