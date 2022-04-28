#pragma once
#include "CoreMinimal.h"
#include "OnlineShowLoginUIResultDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=BlueprintAsyncActionBase -FallbackName=BlueprintAsyncActionBase
#include "ShowLoginUICallbackProxy.generated.h"

class APlayerController;
class UShowLoginUICallbackProxy;
class UObject;

UCLASS(Blueprintable, MinimalAPI)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineShowLoginUIResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineShowLoginUIResult OnFailure;
    
    UShowLoginUICallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UShowLoginUICallbackProxy* ShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController);
    
};

