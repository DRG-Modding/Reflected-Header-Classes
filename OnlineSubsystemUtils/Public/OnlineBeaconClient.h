#pragma once
#include "CoreMinimal.h"
#include "OnlineBeacon.h"
#include "EBeaconConnectionState.h"
#include "OnlineBeaconClient.generated.h"

class AOnlineBeaconHostObject;
class UNetConnection;

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API AOnlineBeaconClient : public AOnlineBeacon {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    AOnlineBeaconHostObject* BeaconOwner;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UNetConnection* BeaconConnection;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EBeaconConnectionState ConnectionState;
    
public:
    AOnlineBeaconClient();
private:
    UFUNCTION(BlueprintCallable, Client, Reliable)
    void ClientOnConnected();
    
};

