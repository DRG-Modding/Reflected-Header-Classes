#include "FSDMatchmakingCallbackProxy.h"

class UObject;
class UFSDMatchmakingCallbackProxy;
class APlayerController;
class UDifficultySetting;
class UBiome;
class UMissionTemplate;

UFSDMatchmakingCallbackProxy* UFSDMatchmakingCallbackProxy::FSDMatchmaking(UObject* WorldContextObject, APlayerController* PlayerController, const FFSDMatchmakingCallbackProxyFailDelegate& FailDelegate, UDifficultySetting* DesiredDifficulty, UBiome* desiredBiome, UMissionTemplate* desiredMission) {
    return NULL;
}

void UFSDMatchmakingCallbackProxy::CancelMatchmaking() {
}

UFSDMatchmakingCallbackProxy::UFSDMatchmakingCallbackProxy() {
    this->mission = NULL;
    this->Biome = NULL;
    this->Difficulty = NULL;
}

