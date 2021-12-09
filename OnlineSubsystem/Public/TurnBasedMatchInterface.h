#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "TurnBasedMatchInterface.generated.h"

UINTERFACE(Blueprintable)
class UTurnBasedMatchInterface : public UInterface {
    GENERATED_BODY()
};

class ITurnBasedMatchInterface : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnMatchReceivedTurn(const FString& Match, bool bDidBecomeActive);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnMatchEnded(const FString& Match);
    
};

