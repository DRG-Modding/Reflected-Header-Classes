#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene EMovieSceneBlendType
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
//CROSS-MODULE INCLUDE: MovieScene MovieScenePropertySectionTemplate
#include "MovieSceneMarginSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneMarginSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
private:
    UPROPERTY()
    FMovieSceneFloatChannel TopCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel LeftCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel RightCurve;
    
    UPROPERTY()
    FMovieSceneFloatChannel BottomCurve;
    
    UPROPERTY()
    EMovieSceneBlendType BlendType;
    
public:
    UMG_API FMovieSceneMarginSectionTemplate();
};

