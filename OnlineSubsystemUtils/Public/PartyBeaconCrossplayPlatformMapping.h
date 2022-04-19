#pragma once
#include "CoreMinimal.h"
#include "PartyBeaconCrossplayPlatformMapping.generated.h"

USTRUCT(BlueprintType)
struct FPartyBeaconCrossplayPlatformMapping {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString PlatformName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString PlatformType;
    
    ONLINESUBSYSTEMUTILS_API FPartyBeaconCrossplayPlatformMapping();
};

