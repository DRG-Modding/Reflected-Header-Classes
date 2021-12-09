#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCaptureProtocolBase.h"
#include "MovieSceneImageCaptureProtocolBase.generated.h"

UCLASS(Abstract)
class MOVIESCENECAPTURE_API UMovieSceneImageCaptureProtocolBase : public UMovieSceneCaptureProtocolBase {
    GENERATED_BODY()
public:
    UMovieSceneImageCaptureProtocolBase();
};

