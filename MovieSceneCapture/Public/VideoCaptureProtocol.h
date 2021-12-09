#pragma once
#include "CoreMinimal.h"
#include "FrameGrabberProtocol.h"
#include "VideoCaptureProtocol.generated.h"

UCLASS()
class MOVIESCENECAPTURE_API UVideoCaptureProtocol : public UFrameGrabberProtocol {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool bUseCompression;
    
    UPROPERTY(Config, EditAnywhere)
    float CompressionQuality;
    
    UVideoCaptureProtocol();
};

