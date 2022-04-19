#pragma once
#include "CoreMinimal.h"
#include "OnlineBeacon.h"
#include "OnlineBeaconHost.generated.h"

class AOnlineBeaconClient;

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API AOnlineBeaconHost : public AOnlineBeacon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 ListenPort;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<AOnlineBeaconClient*> ClientActors;
    
public:
    AOnlineBeaconHost();
};

