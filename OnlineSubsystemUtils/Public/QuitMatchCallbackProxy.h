#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE: OnlineSubsystem EMPMatchOutcome
#include "QuitMatchCallbackProxy.generated.h"

class UQuitMatchCallbackProxy;
class UObject;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FQuitMatchCallbackProxyOnSuccess);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FQuitMatchCallbackProxyOnFailure);

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

