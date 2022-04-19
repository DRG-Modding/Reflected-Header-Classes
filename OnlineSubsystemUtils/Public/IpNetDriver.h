#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NetDriver -FallbackName=NetDriver
#include "IpNetDriver.generated.h"

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API UIpNetDriver : public UNetDriver {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    uint8 LogPortUnreach: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    uint8 AllowPlayerPortUnreach: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    uint32 MaxPortCountToTry;
    
private:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    uint32 ServerDesiredSocketReceiveBufferBytes;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    uint32 ServerDesiredSocketSendBufferBytes;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    uint32 ClientDesiredSocketReceiveBufferBytes;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    uint32 ClientDesiredSocketSendBufferBytes;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    double MaxSecondsInReceive;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    int32 NbPacketsBetweenReceiveTimeTest;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    float ResolutionConnectionTimeout;
    
public:
    UIpNetDriver();
};

