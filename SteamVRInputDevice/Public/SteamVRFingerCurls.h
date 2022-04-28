#pragma once
#include "CoreMinimal.h"
#include "SteamVRFingerCurls.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FSteamVRFingerCurls {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Thumb;
    
    UPROPERTY(EditAnywhere)
    float Index;
    
    UPROPERTY(EditAnywhere)
    float Middle;
    
    UPROPERTY(EditAnywhere)
    float Ring;
    
    UPROPERTY(EditAnywhere)
    float Pinky;
    
    FSteamVRFingerCurls();
};

