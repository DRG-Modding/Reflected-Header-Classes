#pragma once
#include "CoreMinimal.h"
#include "MovieSceneGeometryCollectionParams.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneGeometryCollectionSectionTemplateParameters.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneGeometryCollectionSectionTemplateParameters : public FMovieSceneGeometryCollectionParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFrameNumber SectionStartTime;
    
    UPROPERTY()
    FFrameNumber SectionEndTime;
    
    GEOMETRYCOLLECTIONTRACKS_API FMovieSceneGeometryCollectionSectionTemplateParameters();
};

