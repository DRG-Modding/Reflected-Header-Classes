#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EInAppPurchaseStatus.h"
#include "InAppPurchaseReceiptInfo2.h"
#include "InAppPurchaseProductRequest2.h"
#include "InAppPurchaseCallbackProxy2.generated.h"

class UInAppPurchaseCallbackProxy2;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInAppPurchaseCallbackProxy2OnSuccess, EInAppPurchaseStatus, PurchaseStatus, const TArray<FInAppPurchaseReceiptInfo2>&, InAppPurchaseReceipts);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInAppPurchaseCallbackProxy2OnFailure, EInAppPurchaseStatus, PurchaseStatus, const TArray<FInAppPurchaseReceiptInfo2>&, InAppPurchaseReceipts);

UCLASS(BlueprintType, MinimalAPI)
class UInAppPurchaseCallbackProxy2 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseCallbackProxy2OnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseCallbackProxy2OnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseUnprocessedPurchases(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchaseQueryOwned(APlayerController* PlayerController);
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseCallbackProxy2* CreateProxyObjectForInAppPurchase(APlayerController* PlayerController, const FInAppPurchaseProductRequest2& ProductRequest);
    
    UInAppPurchaseCallbackProxy2();
};

