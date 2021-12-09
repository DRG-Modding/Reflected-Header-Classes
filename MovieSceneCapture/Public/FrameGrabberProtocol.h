#pragma once
#include "CoreMinimal.h"
#include "MovieSceneImageCaptureProtocolBase.h"
#include "FrameGrabberProtocol.generated.h"

UCLASS(Abstract)
class MOVIESCENECAPTURE_API UFrameGrabberProtocol : public UMovieSceneImageCaptureProtocolBase {
    GENERATED_BODY()
public:
    UFrameGrabberProtocol();
};

