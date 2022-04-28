#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
#include "TransformParameterNameAndCurves.generated.h"

USTRUCT(BlueprintType)
struct MOVIESCENETRACKS_API FTransformParameterNameAndCurves {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ParameterName;
    
    UPROPERTY(EditAnywhere)
    FMovieSceneFloatChannel Translation[3];
    
    UPROPERTY(EditAnywhere)
    FMovieSceneFloatChannel Rotation[3];
    
    UPROPERTY(EditAnywhere)
    FMovieSceneFloatChannel Scale[3];
    
    FTransformParameterNameAndCurves();
};

