#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine GameSession
//CROSS-MODULE INCLUDE: Engine UniqueNetIdRepl
#include "FSDGameSession.generated.h"

UCLASS()
class AFSDGameSession : public AGameSession {
    GENERATED_BODY()
public:
private:
    UPROPERTY(Transient)
    TArray<FUniqueNetIdRepl> BannedPlayers;
    
public:
    AFSDGameSession();
};

