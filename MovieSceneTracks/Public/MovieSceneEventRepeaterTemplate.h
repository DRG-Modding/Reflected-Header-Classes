#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventTemplateBase.h"
#include "MovieSceneEventPtrs.h"
#include "MovieSceneEventRepeaterTemplate.generated.h"

USTRUCT()
struct FMovieSceneEventRepeaterTemplate : public FMovieSceneEventTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneEventPtrs EventToTrigger;
    
    MOVIESCENETRACKS_API FMovieSceneEventRepeaterTemplate();
};

