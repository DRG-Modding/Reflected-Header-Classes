#pragma once
#include "CoreMinimal.h"
#include "SteamVRInputBindingInfo.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FSteamVRInputBindingInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName DevicePathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputPathName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName ModeName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName slotName;
    
    FSteamVRInputBindingInfo();
};

