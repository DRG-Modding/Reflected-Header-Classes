#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "LeaderboardQueryCallbackProxy.generated.h"

class ULeaderboardQueryCallbackProxy;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLeaderboardQueryCallbackProxyOnSuccess, int32, LeaderboardValue);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FLeaderboardQueryCallbackProxyOnFailure, int32, LeaderboardValue);

UCLASS(BlueprintType, MinimalAPI)
class ULeaderboardQueryCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FLeaderboardQueryCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FLeaderboardQueryCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(APlayerController* PlayerController, FName StatName);
    
    ULeaderboardQueryCallbackProxy();
};

