#include "EndMatchCallbackProxy.h"

class UObject;
class APlayerController;
class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;
class UEndMatchCallbackProxy;

UEndMatchCallbackProxy* UEndMatchCallbackProxy::EndMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<ITurnBasedMatchInterface> MatchActor, const FString& MatchID, TEnumAsByte<EMPMatchOutcome::Type> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome::Type> OtherPlayersOutcome) {
    return NULL;
}

UEndMatchCallbackProxy::UEndMatchCallbackProxy() {
}

