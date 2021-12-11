#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: OnlineSubsystem InAppPurchaseProductInfo
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: OnlineSubsystem EInAppPurchaseState
//CROSS-MODULE INCLUDE: OnlineSubsystem InAppPurchaseProductRequest
#include "InAppPurchaseCallbackProxy.generated.h"

class UInAppPurchaseCallbackProxy;
class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInAppPurchaseCallbackProxyOnSuccess, TEnumAsByte<EInAppPurchaseState::Type>, PurchaseStatus, const FInAppPurchaseProductInfo&, InAppPurchaseReceipts);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInAppPurchaseCallbackProxyOnFailure, TEnumAsByte<EInAppPurchaseState::Type>, PurchaseStatus, const FInAppPurchaseProductInfo&, InAppPurchaseReceipts);

UCLASS(BlueprintType, MinimalAPI)
class UInAppPurchaseCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseCallbackProxy* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, const FInAppPurchaseProductRequest& ProductRequest);
    
    UInAppPurchaseCallbackProxy();
};

