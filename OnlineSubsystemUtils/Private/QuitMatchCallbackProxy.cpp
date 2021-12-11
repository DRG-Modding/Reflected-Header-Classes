#include "QuitMatchCallbackProxy.h"

class UQuitMatchCallbackProxy;
class UObject;
class APlayerController;

UQuitMatchCallbackProxy* UQuitMatchCallbackProxy::QuitMatch(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TEnumAsByte<EMPMatchOutcome::Type> Outcome, int32 TurnTimeoutInSeconds) {
    return NULL;
}

UQuitMatchCallbackProxy::UQuitMatchCallbackProxy() {
}

