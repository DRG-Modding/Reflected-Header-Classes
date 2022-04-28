#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieSceneFloatChannel -FallbackName=MovieSceneFloatChannel
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=EMovieSceneBlendType -FallbackName=EMovieSceneBlendType
#include "MovieSceneColorSectionTemplate.generated.h"

USTRUCT(BlueprintType)
struct FMovieSceneColorSectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FMovieSceneFloatChannel Curves[4];
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EMovieSceneBlendType BlendType;
    
    MOVIESCENETRACKS_API FMovieSceneColorSectionTemplate();
};

