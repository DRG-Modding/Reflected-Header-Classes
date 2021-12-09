#include "AchievementWriteCallbackProxy.h"

class UObject;
class APlayerController;
class UAchievementWriteCallbackProxy;

UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32 UserTag) {
    return NULL;
}

UAchievementWriteCallbackProxy::UAchievementWriteCallbackProxy() {
}

