#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSignedObject.h"
#include "MovieSceneTrackEvalOptions.h"
#include "MovieSceneTrack.generated.h"

UCLASS(Abstract, DefaultToInstanced, MinimalAPI)
class UMovieSceneTrack : public UMovieSceneSignedObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneTrackEvalOptions EvalOptions;
    
protected:
    UPROPERTY()
    bool bIsEvalDisabled;
    
public:
    UMovieSceneTrack();
};

