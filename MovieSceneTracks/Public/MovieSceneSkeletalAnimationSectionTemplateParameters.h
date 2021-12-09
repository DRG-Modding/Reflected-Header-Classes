#pragma once
#include "CoreMinimal.h"
#include "MovieSceneSkeletalAnimationParams.h"
//CROSS-MODULE INCLUDE: CoreUObject FrameNumber
#include "MovieSceneSkeletalAnimationSectionTemplateParameters.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneSkeletalAnimationSectionTemplateParameters : public FMovieSceneSkeletalAnimationParams {
    GENERATED_BODY()
public:
    UPROPERTY()
    FFrameNumber SectionStartTime;
    
    UPROPERTY()
    FFrameNumber SectionEndTime;
    
    MOVIESCENETRACKS_API FMovieSceneSkeletalAnimationSectionTemplateParameters();
};

