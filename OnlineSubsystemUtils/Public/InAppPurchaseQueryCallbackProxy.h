#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: OnlineSubsystem InAppPurchaseProductInfo
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "InAppPurchaseQueryCallbackProxy.generated.h"

class UInAppPurchaseQueryCallbackProxy;
class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInAppPurchaseQueryCallbackProxyOnSuccess, const TArray<FInAppPurchaseProductInfo>&, InAppPurchaseInformation);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInAppPurchaseQueryCallbackProxyOnFailure, const TArray<FInAppPurchaseProductInfo>&, InAppPurchaseInformation);

UCLASS(BlueprintType, MinimalAPI)
class UInAppPurchaseQueryCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseQueryCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseQueryCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);
    
    UInAppPurchaseQueryCallbackProxy();
};

