#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
#include "MovieSceneGeometryCacheSectionTemplateParameters.h"
#include "MovieSceneGeometryCacheSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneGeometryCacheSectionTemplateParameters Params;
    
    GEOMETRYCACHETRACKS_API FMovieSceneGeometryCacheSectionTemplate();
};

