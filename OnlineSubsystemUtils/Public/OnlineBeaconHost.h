#pragma once
#include "CoreMinimal.h"
#include "OnlineBeacon.h"
#include "OnlineBeaconHost.generated.h"

class AOnlineBeaconClient;

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API AOnlineBeaconHost : public AOnlineBeacon {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    int32 ListenPort;
    
private:
    UPROPERTY()
    TArray<AOnlineBeaconClient*> ClientActors;
    
public:
    AOnlineBeaconHost();
};

