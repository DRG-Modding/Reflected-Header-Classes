#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneTrack
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "MovieSceneSpawnTrack.generated.h"

class UMovieSceneSection;

UCLASS()
class MOVIESCENETRACKS_API UMovieSceneSpawnTrack : public UMovieSceneTrack {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> Sections;
    
    UPROPERTY()
    FGuid ObjectGuid;
    
public:
    UMovieSceneSpawnTrack();
};

