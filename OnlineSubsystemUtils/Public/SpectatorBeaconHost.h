#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "SpectatorBeaconHost.generated.h"

class USpectatorBeaconState;

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API ASpectatorBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    USpectatorBeaconState* State;
    
    UPROPERTY(Config)
    bool bLogoutOnSessionTimeout;
    
    UPROPERTY(Config, Transient)
    float SessionTimeoutSecs;
    
    UPROPERTY(Config, Transient)
    float TravelSessionTimeoutSecs;
    
public:
    ASpectatorBeaconHost();
};

