#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "GameNetworkManagerSettings.generated.h"

UCLASS(Blueprintable, Config=Game)
class ENGINESETTINGS_API UGameNetworkManagerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 MinDynamicBandwidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 MaxDynamicBandwidth;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, GlobalConfig, meta=(AllowPrivateAccess=true))
    int32 TotalNetBandwidth;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 BadPingThreshold;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 bIsStandbyCheckingEnabled: 1;
    
    UPROPERTY(Config, EditAnywhere)
    float StandbyRxCheatTime;
    
    UPROPERTY(Config, EditAnywhere)
    float StandbyTxCheatTime;
    
    UPROPERTY(Config, EditAnywhere)
    float PercentMissingForRxStandby;
    
    UPROPERTY(Config, EditAnywhere)
    float PercentMissingForTxStandby;
    
    UPROPERTY(Config, EditAnywhere)
    float PercentForBadPing;
    
    UPROPERTY(Config, EditAnywhere)
    float JoinInProgressStandbyWaitTime;
    
    UGameNetworkManagerSettings();
};

