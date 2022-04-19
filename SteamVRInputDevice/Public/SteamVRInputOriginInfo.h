#pragma once
#include "CoreMinimal.h"
#include "SteamVRInputOriginInfo.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FSteamVRInputOriginInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 TrackedDeviceIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString RenderModelComponentName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString TrackedDeviceModel;
    
    FSteamVRInputOriginInfo();
};

