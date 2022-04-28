#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
#include "EndTurnCallbackProxy.generated.h"

class UObject;
class UTurnBasedMatchInterface;
class ITurnBasedMatchInterface;
class UEndTurnCallbackProxy;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UEndTurnCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UEndTurnCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UEndTurnCallbackProxy* EndTurn(UObject* WorldContextObject, APlayerController* PlayerController, const FString& MatchID, TScriptInterface<ITurnBasedMatchInterface> TurnBasedMatchInterface);
    
};

