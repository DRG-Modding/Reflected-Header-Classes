#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneTrack
#include "MovieScene3DConstraintTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieScene3DConstraintTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> ConstraintSections;
    
public:
    UMovieScene3DConstraintTrack();
};

