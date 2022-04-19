#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "PartyBeaconHost.generated.h"

class UPartyBeaconState;

UCLASS(NonTransient)
class ONLINESUBSYSTEMUTILS_API APartyBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UPartyBeaconState* State;
    
    UPROPERTY(BlueprintReadWrite, Config, meta=(AllowPrivateAccess=true))
    bool bLogoutOnSessionTimeout;
    
    UPROPERTY(BlueprintReadWrite, Config, Transient, meta=(AllowPrivateAccess=true))
    float SessionTimeoutSecs;
    
    UPROPERTY(BlueprintReadWrite, Config, Transient, meta=(AllowPrivateAccess=true))
    float TravelSessionTimeoutSecs;
    
public:
    APartyBeaconHost();
};

