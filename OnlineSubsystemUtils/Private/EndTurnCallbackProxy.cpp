#include "EndTurnCallbackProxy.h"

class APlayerController;
class UObject;
class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;
class UEndTurnCallbackProxy;

UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface) {
    return NULL;
}

UEndTurnCallbackProxy::UEndTurnCallbackProxy() {
}

