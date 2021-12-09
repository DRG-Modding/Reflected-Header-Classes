#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
#include "FSDCreateSessionCallbackProxy.generated.h"

class UFSDCreateSessionCallbackProxy;
class UObject;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDCreateSessionCallbackProxyOnSuccess);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDCreateSessionCallbackProxyOnFailure);

UCLASS(MinimalAPI)
class UFSDCreateSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDCreateSessionCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FFSDCreateSessionCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UFSDCreateSessionCallbackProxy* FSDCreateSession(UObject* WorldContextObject, APlayerController* PlayerController, int32 PublicConnections, bool bUseLAN, bool bFriendsOnly);
    
    UFSDCreateSessionCallbackProxy();
};

