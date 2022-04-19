#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=GameSession -FallbackName=GameSession
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=UniqueNetIdRepl -FallbackName=UniqueNetIdRepl
#include "FSDGameSession.generated.h"

UCLASS()
class AFSDGameSession : public AGameSession {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FUniqueNetIdRepl> BannedPlayers;
    
public:
    AFSDGameSession();
};

