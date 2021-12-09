#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "WmfMediaSettings.generated.h"

UCLASS(DefaultConfig)
class WMFMEDIAFACTORY_API UWmfMediaSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool AllowNonStandardCodecs;
    
    UPROPERTY(Config, EditAnywhere)
    bool LowLatency;
    
    UPROPERTY(Config, EditAnywhere)
    bool NativeAudioOut;
    
    UPROPERTY(Config, EditAnywhere)
    bool HardwareAcceleratedVideoDecoding;
    
    UWmfMediaSettings();
};

