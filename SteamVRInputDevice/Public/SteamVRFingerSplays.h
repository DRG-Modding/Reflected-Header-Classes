#pragma once
#include "CoreMinimal.h"
#include "SteamVRFingerSplays.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FSteamVRFingerSplays {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Thumb_Index;
    
    UPROPERTY(EditAnywhere)
    float Index_Middle;
    
    UPROPERTY(EditAnywhere)
    float Middle_Ring;
    
    UPROPERTY(EditAnywhere)
    float Ring_Pinky;
    
    FSteamVRFingerSplays();
};

