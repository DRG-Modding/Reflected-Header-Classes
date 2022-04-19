#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "OnlineConnectionResultDelegate.h"
#include "ConnectionCallbackProxy.generated.h"

class APlayerController;
class UConnectionCallbackProxy;
class UObject;

UCLASS(MinimalAPI)
class UConnectionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnlineConnectionResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FOnlineConnectionResult OnFailure;
    
    UConnectionCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UConnectionCallbackProxy* ConnectToService(UObject* WorldContextObject, APlayerController* PlayerController);
    
};

