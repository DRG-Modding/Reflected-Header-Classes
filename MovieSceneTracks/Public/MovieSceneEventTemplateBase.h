#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE: MovieScene MovieSceneObjectBindingID
#include "MovieSceneEventTemplateBase.generated.h"

USTRUCT()
struct FMovieSceneEventTemplateBase : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    TArray<FMovieSceneObjectBindingID> EventReceivers;
    
    UPROPERTY()
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY()
    uint8 bFireEventsWhenBackwards: 1;
    
    MOVIESCENETRACKS_API FMovieSceneEventTemplateBase();
};

