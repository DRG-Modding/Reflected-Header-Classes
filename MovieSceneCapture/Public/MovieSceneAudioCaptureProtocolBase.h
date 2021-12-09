#pragma once
#include "CoreMinimal.h"
#include "MovieSceneCaptureProtocolBase.h"
#include "MovieSceneAudioCaptureProtocolBase.generated.h"

UCLASS(Abstract)
class MOVIESCENECAPTURE_API UMovieSceneAudioCaptureProtocolBase : public UMovieSceneCaptureProtocolBase {
    GENERATED_BODY()
public:
    UMovieSceneAudioCaptureProtocolBase();
};

