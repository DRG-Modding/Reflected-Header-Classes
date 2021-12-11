#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine BlueprintAsyncActionBase
#include "ShowLoginUICallbackProxy.generated.h"

class UShowLoginUICallbackProxy;
class APlayerController;
class UObject;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowLoginUICallbackProxyOnSuccess, APlayerController*, PlayerController);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FShowLoginUICallbackProxyOnFailure, APlayerController*, PlayerController);

UCLASS(MinimalAPI)
class UShowLoginUICallbackProxy : public UBlueprintAsyncActionBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FShowLoginUICallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FShowLoginUICallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UShowLoginUICallbackProxy* ShowExternalLoginUI(UObject* WorldContextObject, APlayerController* InPlayerController);
    
    UShowLoginUICallbackProxy();
};

