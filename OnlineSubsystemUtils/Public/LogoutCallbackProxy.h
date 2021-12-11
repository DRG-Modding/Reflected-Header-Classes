#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "LogoutCallbackProxy.generated.h"

class ULogoutCallbackProxy;
class APlayerController;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLogoutCallbackProxyOnSuccess, APlayerController*, PlayerController);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLogoutCallbackProxyOnFailure, APlayerController*, PlayerController);

UCLASS(MinimalAPI)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLogoutCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FLogoutCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static ULogoutCallbackProxy* Logout(UObject* WorldContextObject, APlayerController* PlayerController);
    
    ULogoutCallbackProxy();
};

