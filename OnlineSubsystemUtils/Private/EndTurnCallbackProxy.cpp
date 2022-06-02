#include "EndTurnCallbackProxy.h"

class UEndTurnCallbackProxy;
class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;
class UObject;
class APlayerController;

UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface) {
    return NULL;
}

UEndTurnCallbackProxy::UEndTurnCallbackProxy() {
}

