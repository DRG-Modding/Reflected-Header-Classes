#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE: OnlineSubsystem EMPMatchOutcome
#include "EndMatchCallbackProxy.generated.h"

class UEndMatchCallbackProxy;
class UObject;
class APlayerController;
class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndMatchCallbackProxyOnSuccess);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndMatchCallbackProxyOnFailure);

UCLASS(MinimalAPI)
class UEndMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEndMatchCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FEndMatchCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UEndMatchCallbackProxy* EndMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<ITurnBasedMatchInterface> MatchActor, const FString& MatchID, TEnumAsByte<EMPMatchOutcome::Type> LocalPlayerOutcome, TEnumAsByte<EMPMatchOutcome::Type> OtherPlayersOutcome);
    
    UEndMatchCallbackProxy();
};

