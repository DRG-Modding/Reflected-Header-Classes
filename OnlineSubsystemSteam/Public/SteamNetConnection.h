#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=IpConnection -FallbackName=IpConnection
#include "SteamNetConnection.generated.h"

UCLASS(NonTransient)
class USteamNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bIsPassthrough;
    
    USteamNetConnection();
};

