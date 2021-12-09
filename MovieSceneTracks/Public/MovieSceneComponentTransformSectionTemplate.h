#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
#include "MovieScene3DTransformTemplateData.h"
#include "MovieSceneComponentTransformSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneComponentTransformSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieScene3DTransformTemplateData TemplateData;
    
    MOVIESCENETRACKS_API FMovieSceneComponentTransformSectionTemplate();
};

