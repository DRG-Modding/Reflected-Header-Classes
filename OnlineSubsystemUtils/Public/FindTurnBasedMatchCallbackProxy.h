#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
#include "FindTurnBasedMatchCallbackProxy.generated.h"

class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;
class UFindTurnBasedMatchCallbackProxy;
class UObject;
class APlayerController;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindTurnBasedMatchCallbackProxyOnSuccess, const FString&, MatchID);
UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindTurnBasedMatchCallbackProxyOnFailure, const FString&, MatchID);

UCLASS(MinimalAPI)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFindTurnBasedMatchCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FFindTurnBasedMatchCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches);
    
    UFindTurnBasedMatchCallbackProxy();
};

