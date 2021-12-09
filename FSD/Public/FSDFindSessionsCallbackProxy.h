#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE: OnlineSubsystemUtils BlueprintSessionResult
#include "FSDFindSessionsCallbackProxy.generated.h"

class UObject;
class UFSDFindSteamSessions;
class UFSDFindSessionsCallbackProxy;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDFindSessionsCallbackProxyOnSuccess, const TArray<FBlueprintSessionResult>&, Results);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDFindSessionsCallbackProxyOnFailure, const TArray<FBlueprintSessionResult>&, Results);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFSDFindSessionsCallbackProxyOnRefresh, const TArray<FBlueprintSessionResult>&, Results);

UCLASS(MinimalAPI)
class UFSDFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDFindSessionsCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FFSDFindSessionsCallbackProxyOnFailure OnFailure;
    
    UPROPERTY(BlueprintAssignable)
    FFSDFindSessionsCallbackProxyOnRefresh OnRefresh;
    
private:
    UPROPERTY()
    UObject* WorldContextObject;
    
    UPROPERTY()
    UFSDFindSteamSessions* FSDFindSteamSessions;
    
    UFUNCTION()
    void OnFSDCompleted(bool bSuccess, const TArray<FBlueprintSessionResult>& Results);
    
public:
    UFUNCTION(BlueprintCallable)
    static void ManualRefreshServerList();
    
    UFUNCTION(BlueprintCallable)
    static UFSDFindSessionsCallbackProxy* FSDFindSessions(UObject* NewWorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
    
    UFUNCTION(BlueprintCallable)
    static UFSDFindSessionsCallbackProxy* FSDFindFullSessions(UObject* NewWorldContextObject, APlayerController* PlayerController, int32 MaxResults);
    
    UFSDFindSessionsCallbackProxy();
};

