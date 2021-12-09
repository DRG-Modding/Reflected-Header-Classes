#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "InAppPurchaseRestoreInfo2.h"
#include "EInAppPurchaseStatus.h"
#include "InAppPurchaseProductRequest2.h"
#include "InAppPurchaseRestoreCallbackProxy2.generated.h"

class UInAppPurchaseRestoreCallbackProxy2;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInAppPurchaseRestoreCallbackProxy2OnSuccess, EInAppPurchaseStatus, PurchaseStatus, const TArray<FInAppPurchaseRestoreInfo2>&, InAppPurchaseRestoreInfo);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FInAppPurchaseRestoreCallbackProxy2OnFailure, EInAppPurchaseStatus, PurchaseStatus, const TArray<FInAppPurchaseRestoreInfo2>&, InAppPurchaseRestoreInfo);

UCLASS(BlueprintType, MinimalAPI)
class UInAppPurchaseRestoreCallbackProxy2 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseRestoreCallbackProxy2OnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseRestoreCallbackProxy2OnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseRestoreCallbackProxy2* CreateProxyObjectForInAppPurchaseRestore(const TArray<FInAppPurchaseProductRequest2>& ConsumableProductFlags, APlayerController* PlayerController);
    
    UInAppPurchaseRestoreCallbackProxy2();
};

