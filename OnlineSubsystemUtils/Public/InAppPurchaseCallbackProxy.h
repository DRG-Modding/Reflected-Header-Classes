#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InAppPurchaseResultDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystem -ObjectName=InAppPurchaseProductRequest -FallbackName=InAppPurchaseProductRequest
#include "InAppPurchaseCallbackProxy.generated.h"

class UInAppPurchaseCallbackProxy;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UInAppPurchaseCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInAppPurchaseResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInAppPurchaseResult OnFailure;
    
    UInAppPurchaseCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, const FInAppPurchaseProductRequest& ProductRequest);
    
};

