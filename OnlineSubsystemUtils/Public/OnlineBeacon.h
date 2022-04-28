#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=Actor -FallbackName=Actor
#include "OnlineBeacon.generated.h"

class UNetDriver;

UCLASS(Blueprintable, NotPlaceable, Transient)
class ONLINESUBSYSTEMUTILS_API AOnlineBeacon : public AActor {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Config, EditAnywhere)
    float BeaconConnectionInitialTimeout;
    
    UPROPERTY(Config, EditAnywhere)
    float BeaconConnectionTimeout;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UNetDriver* NetDriver;
    
public:
    AOnlineBeacon();
};

