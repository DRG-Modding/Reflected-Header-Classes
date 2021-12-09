#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneNameableTrack
#include "MovieSceneCameraCutTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UMovieSceneCameraCutTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bCanBlend;
    
private:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieSceneCameraCutTrack();
};

