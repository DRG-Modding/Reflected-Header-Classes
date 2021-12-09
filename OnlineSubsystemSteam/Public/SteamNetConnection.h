#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: OnlineSubsystemUtils IpConnection
#include "SteamNetConnection.generated.h"

UCLASS(NonTransient)
class USteamNetConnection : public UIpConnection {
    GENERATED_BODY()
public:
    UPROPERTY()
    bool bIsPassthrough;
    
    USteamNetConnection();
};

