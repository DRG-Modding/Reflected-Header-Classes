#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: OnlineSubsystemUtils OnlineSessionClient
#include "FSDOnlineSessionClient.generated.h"

UCLASS()
class UFSDOnlineSessionClient : public UOnlineSessionClient {
    GENERATED_BODY()
public:
    UFSDOnlineSessionClient();
};

