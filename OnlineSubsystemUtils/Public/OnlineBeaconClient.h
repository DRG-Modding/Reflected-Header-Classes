#pragma once
#include "CoreMinimal.h"
#include "OnlineBeacon.h"
#include "EBeaconConnectionState.h"
#include "OnlineBeaconClient.generated.h"

class UNetConnection;
class AOnlineBeaconHostObject;

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API AOnlineBeaconClient : public AOnlineBeacon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY()
    AOnlineBeaconHostObject* BeaconOwner;
    
    UPROPERTY()
    UNetConnection* BeaconConnection;
    
    UPROPERTY()
    EBeaconConnectionState ConnectionState;
    
private:
    UFUNCTION(Client, Reliable)
    void ClientOnConnected();
    
public:
    AOnlineBeaconClient();
};

