#pragma once
#include "CoreMinimal.h"
#include "OnlineBeaconHostObject.h"
#include "PartyBeaconHost.generated.h"

class UPartyBeaconState;

UCLASS(Blueprintable, NonTransient)
class ONLINESUBSYSTEMUTILS_API APartyBeaconHost : public AOnlineBeaconHostObject {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UPartyBeaconState* State;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bLogoutOnSessionTimeout;
    
    UPROPERTY(Config, EditAnywhere, Transient)
    float SessionTimeoutSecs;
    
    UPROPERTY(Config, EditAnywhere, Transient)
    float TravelSessionTimeoutSecs;
    
public:
    APartyBeaconHost();
};

