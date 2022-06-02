#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "InAppPurchaseQuery2ResultDelegate.h"
#include "InAppPurchaseQueryCallbackProxy2.generated.h"

class UInAppPurchaseQueryCallbackProxy2;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UInAppPurchaseQueryCallbackProxy2 : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInAppPurchaseQuery2Result OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FInAppPurchaseQuery2Result OnFailure;
    
    UInAppPurchaseQueryCallbackProxy2();
    UFUNCTION(BlueprintCallable)
    static UInAppPurchaseQueryCallbackProxy2* CreateProxyObjectForInAppPurchaseQuery(APlayerController* PlayerController, const TArray<FString>& ProductIdentifiers);
    
};

