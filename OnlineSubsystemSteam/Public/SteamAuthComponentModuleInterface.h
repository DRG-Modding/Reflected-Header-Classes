#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: PacketHandler HandlerComponentFactory
#include "SteamAuthComponentModuleInterface.generated.h"

UCLASS()
class USteamAuthComponentModuleInterface : public UHandlerComponentFactory {
    GENERATED_BODY()
public:
    USteamAuthComponentModuleInterface();
};

