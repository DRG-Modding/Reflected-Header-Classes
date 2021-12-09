#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "LeaderboardFlushCallbackProxy.generated.h"

class APlayerController;
class ULeaderboardFlushCallbackProxy;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLeaderboardFlushCallbackProxyOnSuccess, FName, SessionName);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLeaderboardFlushCallbackProxyOnFailure, FName, SessionName);

UCLASS(BlueprintType, MinimalAPI)
class ULeaderboardFlushCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLeaderboardFlushCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FLeaderboardFlushCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static ULeaderboardFlushCallbackProxy* CreateProxyObjectForFlush(APlayerController* PlayerController, FName SessionName);
    
    ULeaderboardFlushCallbackProxy();
};

