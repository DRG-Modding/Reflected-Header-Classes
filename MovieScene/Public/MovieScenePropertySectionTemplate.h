#pragma once
#include "CoreMinimal.h"
#include "MovieScenePropertySectionData.h"
#include "MovieSceneEvalTemplate.h"
#include "MovieScenePropertySectionTemplate.generated.h"

USTRUCT()
struct MOVIESCENE_API FMovieScenePropertySectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieScenePropertySectionData PropertyData;
    
public:
    FMovieScenePropertySectionTemplate();
};

