#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneSection -FallbackName=MovieSceneSection
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneEntityProvider -FallbackName=MovieSceneEntityProvider
#include "MovieScene2DTransformMask.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "MovieScene2DTransformSection.generated.h"

UCLASS(Blueprintable, MinimalAPI)
class UMovieScene2DTransformSection : public UMovieSceneSection, public IMovieSceneEntityProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieScene2DTransformMask TransformMask;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneFloatChannel Translation[2];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMovieSceneFloatChannel Rotation;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneFloatChannel Scale[2];
    
    UPROPERTY(EditAnywhere)
    FMovieSceneFloatChannel Shear[2];
    
    UMovieScene2DTransformSection();
    
    // Fix for true pure virtual functions not being implemented
};

