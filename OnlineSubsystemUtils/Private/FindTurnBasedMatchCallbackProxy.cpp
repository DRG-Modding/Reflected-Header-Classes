#include "FindTurnBasedMatchCallbackProxy.h"

class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;
class UObject;
class UFindTurnBasedMatchCallbackProxy;
class APlayerController;

UFindTurnBasedMatchCallbackProxy* UFindTurnBasedMatchCallbackProxy::FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches) {
    return NULL;
}

UFindTurnBasedMatchCallbackProxy::UFindTurnBasedMatchCallbackProxy() {
}

