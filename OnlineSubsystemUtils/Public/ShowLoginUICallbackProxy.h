#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "OnlineShowLoginUIResultDelegate.h"
#include "ShowLoginUICallbackProxy.generated.h"

class UShowLoginUICallbackProxy;
class UObject;
class APlayerController;

UCLASS(MinimalAPI)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnlineShowLoginUIResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnlineShowLoginUIResult OnFailure;
    
    UShowLoginUICallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UShowLoginUICallbackProxy* ShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController);
    
};

