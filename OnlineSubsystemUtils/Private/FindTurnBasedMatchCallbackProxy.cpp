#include "FindTurnBasedMatchCallbackProxy.h"

class UObject;
class APlayerController;
class UFindTurnBasedMatchCallbackProxy;
class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;

UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches) {
    return NULL;
}

UFindTurnBasedMatchCallbackProxy::UFindTurnBasedMatchCallbackProxy() {
}

