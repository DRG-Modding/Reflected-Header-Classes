#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneNameableTrack
#include "MovieScenePropertyTrack.generated.h"

class UMovieSceneSection;

UCLASS(Abstract)
class MOVIESCENETRACKS_API UMovieScenePropertyTrack : public UMovieSceneNameableTrack {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Export)
    UMovieSceneSection* SectionToKey;
    
protected:
    UPROPERTY()
    FName PropertyName;
    
    UPROPERTY()
    FString PropertyPath;
    
    UPROPERTY(Export)
    TArray<UMovieSceneSection*> Sections;
    
public:
    UMovieScenePropertyTrack();
};

