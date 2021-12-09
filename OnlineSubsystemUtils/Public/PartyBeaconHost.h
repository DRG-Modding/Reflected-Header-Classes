#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "PartyBeaconHost.generated.h"

class UPartyBeaconState;

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API APartyBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    UPartyBeaconState* State;
    
    UPROPERTY(Config)
    bool bLogoutOnSessionTimeout;
    
    UPROPERTY(Config, Transient)
    float SessionTimeoutSecs;
    
    UPROPERTY(Config, Transient)
    float TravelSessionTimeoutSecs;
    
public:
    APartyBeaconHost();
};

