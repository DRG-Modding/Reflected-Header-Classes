#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSectionGroup.generated.h"

class UMovieSceneSection;

USTRUCT(BlueprintType)
struct FMovieSceneSectionGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export)
    TArray<TWeakObjectPtr<UMovieSceneSection>> Sections;
    
public:
    MOVIESCENE_API FMovieSceneSectionGroup();
};

