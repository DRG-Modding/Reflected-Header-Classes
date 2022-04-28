#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=OnlineSessionClient -FallbackName=OnlineSessionClient
#include "FSDOnlineSessionClient.generated.h"

UCLASS(Blueprintable)
class UFSDOnlineSessionClient : public UOnlineSessionClient {
    GENERATED_BODY()
public:
    UFSDOnlineSessionClient();
};

