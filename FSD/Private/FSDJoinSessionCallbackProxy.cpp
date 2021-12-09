#include "FSDJoinSessionCallbackProxy.h"

class UFSDJoinSessionCallbackProxy;
class UObject;
class APlayerController;

UFSDJoinSessionCallbackProxy* UFSDJoinSessionCallbackProxy::FSDJoinSession(UObject* NewWorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult, const FString& FSDPassword, bool fromInvite) {
    return NULL;
}

UFSDJoinSessionCallbackProxy::UFSDJoinSessionCallbackProxy() {
    this->WorldContextObject = NULL;
}

