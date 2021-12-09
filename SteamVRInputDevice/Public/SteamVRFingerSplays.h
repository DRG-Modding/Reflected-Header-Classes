#pragma once
#include "CoreMinimal.h"
#include "SteamVRFingerSplays.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FSteamVRFingerSplays {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Thumb_Index;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Index_Middle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Middle_Ring;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Ring_Pinky;
    
    FSteamVRFingerSplays();
};

