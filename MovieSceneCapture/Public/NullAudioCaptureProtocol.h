#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAudioCaptureProtocolBase.h"
#include "NullAudioCaptureProtocol.generated.h"

UCLASS()
class MOVIESCENECAPTURE_API UNullAudioCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {
    GENERATED_BODY()
public:
    UNullAudioCaptureProtocol();
};

