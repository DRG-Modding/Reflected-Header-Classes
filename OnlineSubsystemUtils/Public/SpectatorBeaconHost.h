#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "SpectatorBeaconHost.generated.h"

class USpectatorBeaconState;

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API ASpectatorBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    USpectatorBeaconState* State;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    bool bLogoutOnSessionTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, Transient, meta=(AllowPrivateAccess=true))
    float SessionTimeoutSecs;
    
    UPROPERTY(BlueprintReadWrite, Config, Transient, meta=(AllowPrivateAccess=true))
    float TravelSessionTimeoutSecs;
    
public:
    ASpectatorBeaconHost();
};

