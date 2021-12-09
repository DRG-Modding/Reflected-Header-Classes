#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "TestMovieSceneTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UTestMovieSceneTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bHighPassFilter;
    
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> SectionArray;
    
    UTestMovieSceneTrack();
};

