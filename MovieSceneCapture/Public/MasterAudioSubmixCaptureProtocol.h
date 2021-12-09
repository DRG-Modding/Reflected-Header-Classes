#pragma once
#include "CoreMinimal.h"
#include "MovieSceneAudioCaptureProtocolBase.h"
#include "MasterAudioSubmixCaptureProtocol.generated.h"

UCLASS()
class MOVIESCENECAPTURE_API UMasterAudioSubmixCaptureProtocol : public UMovieSceneAudioCaptureProtocolBase {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FString Filename;
    
public:
    UMasterAudioSubmixCaptureProtocol();
};

