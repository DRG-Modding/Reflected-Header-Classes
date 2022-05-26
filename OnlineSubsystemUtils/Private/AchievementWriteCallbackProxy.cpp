#include "AchievementWriteCallbackProxy.h"

class APlayerController;
class UObject;
class UAchievementWriteCallbackProxy;

UAchievementWriteCallbackProxy* UAchievementWriteCallbackProxy::WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32 UserTag) {
    return NULL;
}

UAchievementWriteCallbackProxy::UAchievementWriteCallbackProxy() {
}

