#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "OnlineTurnBasedMatchResultDelegate.h"
#include "FindTurnBasedMatchCallbackProxy.generated.h"

class UFindTurnBasedMatchCallbackProxy;
class UObject;
class APlayerController;
class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;

UCLASS(Blueprintable, MinimalAPI)
class UFindTurnBasedMatchCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineTurnBasedMatchResult OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FOnlineTurnBasedMatchResult OnFailure;
    
    UFindTurnBasedMatchCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UFindTurnBasedMatchCallbackProxy* FindTurnBasedMatch(UObject* WorldContextObject, APlayerController* PlayerController, TScriptInterface<ITurnBasedMatchInterface> MatchActor, int32 MinPlayers, int32 MaxPlayers, int32 PlayerGroup, bool ShowExistingMatches);
    
};

