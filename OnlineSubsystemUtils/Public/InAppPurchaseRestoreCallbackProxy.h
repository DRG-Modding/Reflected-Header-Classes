#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: OnlineSubsystem EInAppPurchaseState
//CROSS-MODULE INCLUDE: OnlineSubsystem InAppPurchaseRestoreInfo
//CROSS-MODULE INCLUDE: OnlineSubsystem InAppPurchaseProductRequest
#include "InAppPurchaseRestoreCallbackProxy.generated.h"

class UInAppPurchaseRestoreCallbackProxy;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInAppPurchaseRestoreCallbackProxyOnSuccess, TEnumAsByte<EInAppPurchaseState::Type>, CompletionStatus, const TArray<FInAppPurchaseRestoreInfo>&, InAppRestorePurchaseInformation);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInAppPurchaseRestoreCallbackProxyOnFailure, TEnumAsByte<EInAppPurchaseState::Type>, CompletionStatus, const TArray<FInAppPurchaseRestoreInfo>&, InAppRestorePurchaseInformation);

UCLASS(BlueprintType, MinimalAPI)
class UInAppPurchaseRestoreCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseRestoreCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseRestoreCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseRestoreCallbackProxy* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest>& ConsumableProductFlags, APlayerController* PlayerController);
    
    UInAppPurchaseRestoreCallbackProxy();
};

