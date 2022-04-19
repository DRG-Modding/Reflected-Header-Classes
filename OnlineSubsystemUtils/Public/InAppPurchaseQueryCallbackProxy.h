#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InAppPurchaseQueryResultDelegate.h"
#include "InAppPurchaseQueryCallbackProxy.generated.h"

class UInAppPurchaseQueryCallbackProxy;
class APlayerController;

UCLASS(BlueprintType, MinimalAPI)
class UInAppPurchaseQueryCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInAppPurchaseQueryResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FInAppPurchaseQueryResult OnFailure;
    
    UInAppPurchaseQueryCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseQueryCallbackProxy* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);
    
};

