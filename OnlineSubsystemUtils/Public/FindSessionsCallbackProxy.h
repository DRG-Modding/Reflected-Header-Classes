#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
#include "BlueprintSessionResult.h"
#include "FindSessionsCallbackProxy.generated.h"

class UObject;
class UFindSessionsCallbackProxy;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindSessionsCallbackProxyOnSuccess, const TArray<FBlueprintSessionResult>&, Results);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindSessionsCallbackProxyOnFailure, const TArray<FBlueprintSessionResult>&, Results);

UCLASS(MinimalAPI)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFindSessionsCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FFindSessionsCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintPure)
    static FString GetServerName(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static int32 GetPingInMs(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static int32 GetMaxPlayers(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintPure)
    static int32 GetCurrentPlayers(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static UFindSessionsCallbackProxy* FindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
    
    UFindSessionsCallbackProxy();
};
