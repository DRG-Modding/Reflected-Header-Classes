#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OnlineBeacon.generated.h"

class UNetDriver;

UCLASS(NotPlaceable, Transient)
class ONLINESUBSYSTEMUTILS_API AOnlineBeacon : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    float BeaconConnectionInitialTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    float BeaconConnectionTimeout;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UNetDriver* NetDriver;
    
public:
    AOnlineBeacon();
};

