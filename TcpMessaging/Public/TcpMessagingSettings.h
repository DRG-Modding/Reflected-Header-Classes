#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "TcpMessagingSettings.generated.h"

UCLASS()
class UTcpMessagingSettings : public UObject {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Config, EditAnywhere)
    bool EnableTransport;
    
    UPROPERTY(Config, EditAnywhere)
    FString ListenEndpoint;
    
    UPROPERTY(Config, EditAnywhere)
    TArray<FString> ConnectToEndpoints;
    
    UPROPERTY(Config, EditAnywhere)
    int32 ConnectionRetryDelay;
    
    UPROPERTY(Config)
    bool bStopServiceWhenAppDeactivates;
    
public:
    UTcpMessagingSettings();
};

