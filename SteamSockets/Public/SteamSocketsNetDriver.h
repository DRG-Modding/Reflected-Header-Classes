#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=NetDriver -FallbackName=NetDriver
#include "SteamSocketsNetDriver.generated.h"

UCLASS(NonTransient)
class STEAMSOCKETS_API USteamSocketsNetDriver : public UNetDriver {
    GENERATED_BODY()
public:
    USteamSocketsNetDriver();
};

