#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "OnlineProxyStoreOffer.h"
#include "InAppPurchaseQueryCallbackProxy2.generated.h"

class UInAppPurchaseQueryCallbackProxy2;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInAppPurchaseQueryCallbackProxy2OnSuccess, const TArray<FOnlineProxyStoreOffer>&, InAppOfferInformation);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FInAppPurchaseQueryCallbackProxy2OnFailure, const TArray<FOnlineProxyStoreOffer>&, InAppOfferInformation);

UCLASS(BlueprintType, MinimalAPI)
class UInAppPurchaseQueryCallbackProxy2 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseQueryCallbackProxy2OnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FInAppPurchaseQueryCallbackProxy2OnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);
    
    UInAppPurchaseQueryCallbackProxy2();
};

