#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene EMovieSceneBlendType
//CROSS-MODULE INCLUDE: MovieScene MovieSceneFloatChannel
#include "MovieSceneTransformMask.h"
#include "MovieScene3DTransformTemplateData.generated.h"

USTRUCT(BlueprintType)
struct FMovieScene3DTransformTemplateData {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneFloatChannel TranslationCurve[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel RotationCurve[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel ScaleCurve[3];
    
    UPROPERTY()
    FMovieSceneFloatChannel ManualWeight;
    
    UPROPERTY()
    EMovieSceneBlendType BlendType;
    
    UPROPERTY()
    FMovieSceneTransformMask Mask;
    
    UPROPERTY()
    bool bUseQuaternionInterpolation;
    
    MOVIESCENETRACKS_API FMovieScene3DTransformTemplateData();
};

