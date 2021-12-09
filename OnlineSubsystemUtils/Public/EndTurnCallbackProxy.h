#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
#include "EndTurnCallbackProxy.generated.h"

class APlayerController;
class UEndTurnCallbackProxy;
class UObject;
class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndTurnCallbackProxyOnSuccess);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FEndTurnCallbackProxyOnFailure);

UCLASS(MinimalAPI)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FEndTurnCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FEndTurnCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UEndTurnCallbackProxy* EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface);
    
    UEndTurnCallbackProxy();
};

