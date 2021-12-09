#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEventTemplateBase.h"
#include "MovieSceneEventSectionData.h"
#include "MovieSceneEventSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneEventSectionTemplate : public FMovieSceneEventTemplateBase {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneEventSectionData EventData;
    
    MOVIESCENETRACKS_API FMovieSceneEventSectionTemplate();
};

