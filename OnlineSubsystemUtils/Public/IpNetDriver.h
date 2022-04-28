#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NetDriver -FallbackName=NetDriver
#include "IpNetDriver.generated.h"

UCLASS(Blueprintable, NonTransient)
class ONLINESUBSYSTEMUTILS_API UIpNetDriver : public UNetDriver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 LogPortUnreach: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    uint8 AllowPlayerPortUnreach: 1;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 MaxPortCountToTry;
    
private:
    UPROPERTY(Config, EditAnywhere)
    uint32 ServerDesiredSocketReceiveBufferBytes;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 ServerDesiredSocketSendBufferBytes;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 ClientDesiredSocketReceiveBufferBytes;
    
    UPROPERTY(Config, EditAnywhere)
    uint32 ClientDesiredSocketSendBufferBytes;
    
    UPROPERTY(Config, EditAnywhere)
    double MaxSecondsInReceive;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 NbPacketsBetweenReceiveTimeTest;
    
    UPROPERTY(Config, EditAnywhere)
    float ResolutionConnectionTimeout;
    
public:
    UIpNetDriver();
};

