#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
#include "CreateSessionCallbackProxy.generated.h"

class APlayerController;
class UCreateSessionCallbackProxy;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCreateSessionCallbackProxyOnSuccess);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FCreateSessionCallbackProxyOnFailure);

UCLASS(MinimalAPI)
class UCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FCreateSessionCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FCreateSessionCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UCreateSessionCallbackProxy* CreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN);
    
    UCreateSessionCallbackProxy();
};

