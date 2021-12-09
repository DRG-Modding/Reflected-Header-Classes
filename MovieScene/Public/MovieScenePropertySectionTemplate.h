#pragma once
#include "CoreMinimal.h"
#include "MovieSceneEvalTemplate.h"
#include "MovieScenePropertySectionData.h"
#include "MovieScenePropertySectionTemplate.generated.h"

USTRUCT()
struct MOVIESCENE_API FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieScenePropertySectionData PropertyData;
    
public:
    FMovieScenePropertySectionTemplate();
};

