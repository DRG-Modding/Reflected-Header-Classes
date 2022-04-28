#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "SpectatorBeaconHost.generated.h"

class USpectatorBeaconState;

UCLASS(Blueprintable, NonTransient)
class ONLINESUBSYSTEMUTILS_API ASpectatorBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USpectatorBeaconState* State;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogoutOnSessionTimeout;
    
    UPROPERTY(Config, EditAnywhere, Transient)
    float SessionTimeoutSecs;
    
    UPROPERTY(Config, EditAnywhere, Transient)
    float TravelSessionTimeoutSecs;
    
public:
    ASpectatorBeaconHost();
};

