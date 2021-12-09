#pragma once
#include "CoreMinimal.h"
#include "MovieSceneGeometryCacheParams.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneGeometryCacheSectionTemplateParameters.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneGeometryCacheSectionTemplateParameters : public FMovieSceneGeometryCacheParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFrameNumber SectionStartTime;
    
    UPROPERTY()
    FFrameNumber SectionEndTime;
    
    GEOMETRYCACHETRACKS_API FMovieSceneGeometryCacheSectionTemplateParameters();
};

