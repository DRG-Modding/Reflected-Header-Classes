#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
#include "ELevelVisibility.h"
#include "MovieSceneLevelVisibilitySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneLevelVisibilitySectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    ELevelVisibility Visibility;
    
    UPROPERTY()
    TArray<FName> LevelNames;
    
public:
    MOVIESCENETRACKS_API FMovieSceneLevelVisibilitySectionTemplate();
};

