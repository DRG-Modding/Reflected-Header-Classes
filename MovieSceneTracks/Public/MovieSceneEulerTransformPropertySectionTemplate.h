#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieScenePropertySectionTemplate
#include "MovieScene3DTransformTemplateData.h"
#include "MovieSceneEulerTransformPropertySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneEulerTransformPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieScene3DTransformTemplateData TemplateData;
    
public:
    MOVIESCENETRACKS_API FMovieSceneEulerTransformPropertySectionTemplate();
};

