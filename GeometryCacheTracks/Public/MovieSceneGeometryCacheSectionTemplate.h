#pragma once
#include "CoreMinimal.h"
#include "MovieSceneGeometryCacheSectionTemplateParameters.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEvalTemplate -FallbackName=MovieSceneEvalTemplate
#include "MovieSceneGeometryCacheSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneGeometryCacheSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneGeometryCacheSectionTemplateParameters Params;
    
    GEOMETRYCACHETRACKS_API FMovieSceneGeometryCacheSectionTemplate();
};

