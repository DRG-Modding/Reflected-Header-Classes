#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine NetDriver
#include "IpNetDriver.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API UIpNetDriver : public UNetDriver {
    GENERATED_BODY()
public:
    UPROPERTY(Config)
    uint8 LogPortUnreach: 1;
    
    UPROPERTY(Config)
    uint8 AllowPlayerPortUnreach: 1;
    
    UPROPERTY(Config)
    uint32 MaxPortCountToTry;
    
private:
    UPROPERTY(Config)
    uint32 ServerDesiredSocketReceiveBufferBytes;
    
    UPROPERTY(Config)
    uint32 ServerDesiredSocketSendBufferBytes;
    
    UPROPERTY(Config)
    uint32 ClientDesiredSocketReceiveBufferBytes;
    
    UPROPERTY(Config)
    uint32 ClientDesiredSocketSendBufferBytes;
    
    UPROPERTY(Config)
    double MaxSecondsInReceive;
    
    UPROPERTY(Config)
    int32 NbPacketsBetweenReceiveTimeTest;
    
    UPROPERTY(Config)
    float ResolutionConnectionTimeout;
    
public:
    UIpNetDriver();
};

