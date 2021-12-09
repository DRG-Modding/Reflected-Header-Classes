#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneNameableTrack
#include "EFireEventsAtPosition.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneObjectBindingID
#include "MovieSceneEventTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieSceneEventTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenForwards: 1;
    
    UPROPERTY(EditAnywhere)
    uint8 bFireEventsWhenBackwards: 1;
    
    UPROPERTY(EditAnywhere)
    EFireEventsAtPosition EventPosition;
    
    UPROPERTY(EditAnywhere)
    TArray<FMovieSceneObjectBindingID> EventReceivers;
    
private:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneEventTrack();
};

