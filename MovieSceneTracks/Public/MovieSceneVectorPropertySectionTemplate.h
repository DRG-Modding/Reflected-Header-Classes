#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
//CROSS-MODULE INCLUDE: MovieScene EMovieSceneBlendType
#include "MovieSceneVectorPropertySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneVectorPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    FMovieSceneFloatChannel ComponentCurves[4];
    
    UPROPERTY()
    int32 NumChannelsUsed;
    
    UPROPERTY()
    EMovieSceneBlendType BlendType;
    
public:
    MOVIESCENETRACKS_API FMovieSceneVectorPropertySectionTemplate();
};

