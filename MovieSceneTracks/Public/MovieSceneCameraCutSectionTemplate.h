#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MovieScene MovieSceneEvalTemplate
//CROSS-MODULE INCLUDE: CoreUObject Transform
//CROSS-MODULE INCLUDE: MovieScene MovieSceneObjectBindingID
#include "MovieSceneCameraCutSectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneCameraCutSectionTemplate : public FMovieSceneEvalTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FMovieSceneObjectBindingID CameraBindingID;
    
    UPROPERTY()
    FTransform CutTransform;
    
    UPROPERTY()
    bool bHasCutTransform;
    
    UPROPERTY()
    bool bIsFinalSection;
    
    MOVIESCENETRACKS_API FMovieSceneCameraCutSectionTemplate();
};

