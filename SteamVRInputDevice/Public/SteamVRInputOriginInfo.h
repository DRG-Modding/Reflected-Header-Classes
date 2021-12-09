#pragma once
#include "CoreMinimal.h"
#include "SteamVRInputOriginInfo.generated.h"

USTRUCT(BlueprintType)
struct STEAMVRINPUTDEVICE_API FSteamVRInputOriginInfo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 TrackedDeviceIndex;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString RenderModelComponentName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FString TrackedDeviceModel;
    
    FSteamVRInputOriginInfo();
};

