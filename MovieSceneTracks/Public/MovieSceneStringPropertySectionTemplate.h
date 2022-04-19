#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MovieScene -ObjectName=MovieScenePropertySectionTemplate -FallbackName=MovieScenePropertySectionTemplate
#include "MovieSceneStringChannel.h"
#include "MovieSceneStringPropertySectionTemplate.generated.h"

USTRUCT()
struct FMovieSceneStringPropertySectionTemplate : public FMovieScenePropertySectionTemplate {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneStringChannel StringCurve;
    
public:
    MOVIESCENETRACKS_API FMovieSceneStringPropertySectionTemplate();
};

