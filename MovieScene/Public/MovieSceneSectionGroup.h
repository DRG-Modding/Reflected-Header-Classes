#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSectionGroup.generated.h"

class UMovieSceneSection;

USTRUCT()
struct FMovieSceneSectionGroup {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export)
    TArray<TWeakObjectPtr<UMovieSceneSection>> Sections;
    
public:
    MOVIESCENE_API FMovieSceneSectionGroup();
};

