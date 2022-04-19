#pragma once
#include "CoreMinimal.h"
#include "MovieSceneTrack.h"
#include "MovieSceneTrackTemplateProducer.h"
#include "TestMovieSceneTrack.generated.h"

class UMovieSceneSection;

UCLASS(MinimalAPI)
class UTestMovieSceneTrack : public UMovieSceneTrack, public IMovieSceneTrackTemplateProducer {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bHighPassFilter;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    TArray<UMovieSceneSection*> SectionArray;
    
    UTestMovieSceneTrack();
    
    // Fix for true pure virtual functions not being implemented
};

