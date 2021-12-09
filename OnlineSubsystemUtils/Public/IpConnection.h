#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine NetConnection
#include "IpConnection.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API UIpConnection : public UNetConnection {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config)
    float SocketErrorDisconnectDelay;
    
public:
    UIpConnection();
};

