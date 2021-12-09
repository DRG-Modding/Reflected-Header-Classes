#include "EndTurnCallbackProxy.h"

class UObject;
class UEndTurnCallbackProxy;
class APlayerController;
class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;

UEndTurnCallbackProxy* UEndTurnCallbackProxy::EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface) {
    return NULL;
}

UEndTurnCallbackProxy::UEndTurnCallbackProxy() {
}

