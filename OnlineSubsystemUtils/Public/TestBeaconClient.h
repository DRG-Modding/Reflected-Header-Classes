#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconClient.h"
#include "TestBeaconClient.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API ATestBeaconClient : public AOnlineBeaconClient {
    GENERATED_BODY()
public:
    UFUNCTION(Reliable, Server, WithValidation)
    void ServerPong();
    
    UFUNCTION(Client, Reliable)
    void ClientPing();
    
    ATestBeaconClient();
};

