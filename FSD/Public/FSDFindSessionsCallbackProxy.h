#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintFindSessionsResultDelegate__DelegateSignature -FallbackName=BlueprintFindSessionsResultDelegateDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE V2: -ModuleName=OnlineSubsystemUtils -ObjectName=BlueprintSessionResult -FallbackName=BlueprintSessionResult
#include "FSDFindSessionsCallbackProxy.generated.h"

class UObject;
class UFSDFindSteamSessions;
class UFSDFindSessionsCallbackProxy;
class APlayerController;

UCLASS(MinimalAPI)
class UFSDFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate OnFailure;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate OnRefresh;
    
private:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UFSDFindSteamSessions* FSDFindSteamSessions;
    
public:
    UFSDFindSessionsCallbackProxy();
private:
    UFUNCTION(BlueprintCallable)
    void OnFSDCompleted(bool bSuccess, const TArray<FBlueprintSessionResult>& Results);
    
public:
    UFUNCTION(BlueprintCallable)
    static void ManualRefreshServerList();
    
    UFUNCTION(BlueprintCallable)
    static UFSDFindSessionsCallbackProxy* FSDFindSessions(UObject* NewWorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
    
    UFUNCTION(BlueprintCallable)
    static UFSDFindSessionsCallbackProxy* FSDFindFullSessions(UObject* NewWorldContextObject, APlayerController* PlayerController, int32 MaxResults);
    
};

