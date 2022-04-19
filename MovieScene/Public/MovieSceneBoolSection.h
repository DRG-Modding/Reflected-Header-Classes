#pragma once
#include "CoreMinimal.h"
#include "MovieSceneBoolChannel.h"
#include "MovieSceneSection.h"
#include "MovieSceneBoolSection.generated.h"

UCLASS(MinimalAPI)
class UMovieSceneBoolSection : public UMovieSceneSection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool DefaultValue;
    
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMovieSceneBoolChannel BoolCurve;
    
public:
    UMovieSceneBoolSection();
};

