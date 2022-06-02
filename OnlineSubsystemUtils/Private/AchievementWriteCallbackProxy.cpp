#include "AchievementWriteCallbackProxy.h"

class UObject;
class UAchievementWriteCallbackProxy;
class APlayerController;

UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32 UserTag) {
    return NULL;
}

UAchievementWriteCallbackProxy::UAchievementWriteCallbackProxy() {
}

