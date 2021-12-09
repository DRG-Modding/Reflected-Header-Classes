#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: OnlineSubsystemUtils IpNetDriver
#include "SteamNetDriver.generated.h"

UCLASS(NonTransient)
class USteamNetDriver : public UIpNetDriver {
    GENERATED_BODY()
public:
    USteamNetDriver();
};

