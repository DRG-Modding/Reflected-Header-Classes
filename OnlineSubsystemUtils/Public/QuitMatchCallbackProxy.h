#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: OnlineSubsystem EMPMatchOutcome
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
#include "QuitMatchCallbackProxy.generated.h"

class UObject;
class UQuitMatchCallbackProxy;
class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FQuitMatchCallbackProxyOnSuccess);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE(FQuitMatchCallbackProxyOnFailure);

UCLASS(MinimalAPI)
class UQuitMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FQuitMatchCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FQuitMatchCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UQuitMatchCallbackProxy* QuitMatch(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TEnumAsByte<EMPMatchOutcome::Type> Outcome, int32 TurnTimeoutInSeconds);
    
    UQuitMatchCallbackProxy();
};

