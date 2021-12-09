#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EUdpMessageFormat.h"
#include "UdpMessagingSettings.generated.h"

UCLASS()
class UUdpMessagingSettings : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(Config, EditAnywhere)
    bool EnableTransport;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    bool bAutoRepair;
    
    UPROPERTY(Config)
    bool bStopServiceWhenAppDeactivates;
    
    UPROPERTY(Config, EditAnywhere)
    FString UnicastEndpoint;
    
    UPROPERTY(Config, EditAnywhere)
    FString MulticastEndpoint;
    
    UPROPERTY(Config, EditAnywhere)
    EUdpMessageFormat MessageFormat;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    uint8 MulticastTimeToLive;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FString> StaticEndpoints;
    
    UPROPERTY(Config, EditAnywhere)
    bool EnableTunnel;
    
    UPROPERTY(Config, EditAnywhere)
    FString TunnelUnicastEndpoint;
    
    UPROPERTY(Config, EditAnywhere)
    FString TunnelMulticastEndpoint;
    
    UPROPERTY(AdvancedDisplay, Config, EditAnywhere)
    TArray<FString> RemoteTunnelEndpoints;
    
    UUdpMessagingSettings();
};

