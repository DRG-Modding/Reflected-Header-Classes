#pragma once
#include "CoreMinimal.h"
#include "SteamVRFingerCurls.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FSteamVRFingerCurls {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Thumb;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Index;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Middle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Ring;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    float Pinky;
    
    FSteamVRFingerCurls();
};

