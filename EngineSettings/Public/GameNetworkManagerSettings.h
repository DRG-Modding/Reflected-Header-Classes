#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "GameNetworkManagerSettings.generated.h"

UCLASS(Config=Game)
class ENGINESETTINGS_API UGameNetworkManagerSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 MinDynamicBandwidth;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 MaxDynamicBandwidth;
    
    UPROPERTY(EditAnywhere, GlobalConfig)
    int32 TotalNetBandwidth;
    
    UPROPERTY(Config, EditAnywhere)
    int32 BadPingThreshold;
    
    UPROPERTY(Config, EditAnywhere)
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

