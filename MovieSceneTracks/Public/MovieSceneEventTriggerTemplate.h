#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventTemplateBase.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneEventPtrs.h"
#include "MovieSceneEventTriggerTemplate.generated.h"

USTRUCT()
struct FMovieSceneEventTriggerTemplate : public FMovieSceneEventTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FFrameNumber> EventTimes;
    
    UPROPERTY()
    TArray<FMovieSceneEventPtrs> Events;
    
    MOVIESCENETRACKS_API FMovieSceneEventTriggerTemplate();
};

