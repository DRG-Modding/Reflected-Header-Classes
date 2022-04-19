#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnlineLogoutResultDelegate.h"
#include "LogoutCallbackProxy.generated.h"

class ULogoutCallbackProxy;
class UObject;
class APlayerController;

UCLASS(MinimalAPI)
class ULogoutCallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnlineLogoutResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnlineLogoutResult OnFailure;
    
    ULogoutCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static ULogoutCallbackProxy* Logout(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

