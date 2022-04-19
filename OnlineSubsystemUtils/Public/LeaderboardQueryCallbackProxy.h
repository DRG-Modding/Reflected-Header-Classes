#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "LeaderboardQueryResultDelegate.h"
#include "LeaderboardQueryCallbackProxy.generated.h"

class APlayerController;
class ULeaderboardQueryCallbackProxy;

UCLASS(BlueprintType, MinimalAPI)
class ULeaderboardQueryCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLeaderboardQueryResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLeaderboardQueryResult OnFailure;
    
    ULeaderboardQueryCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static ULeaderboardQueryCallbackProxy* CreateProxyObjectForIntQuery(APlayerController* PlayerController, FName StatName);
    
};

