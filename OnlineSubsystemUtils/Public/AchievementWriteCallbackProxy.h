#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
#include "AchievementWriteCallbackProxy.generated.h"

class UAchievementWriteCallbackProxy;
class UObject;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAchievementWriteCallbackProxyOnSuccess, FName, WrittenAchievementName, float, WrittenProgress, int32, WrittenUserTag);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_ThreeParams(FAchievementWriteCallbackProxyOnFailure, FName, WrittenAchievementName, float, WrittenProgress, int32, WrittenUserTag);

UCLASS(MinimalAPI)
class UAchievementWriteCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FAchievementWriteCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FAchievementWriteCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UAchievementWriteCallbackProxy* WriteAchievementProgress(UObject* WorldContextObject, APlayerController* PlayerController, FName AchievementName, float Progress, int32 UserTag);
    
    UAchievementWriteCallbackProxy();
};

