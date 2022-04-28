#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "BlueprintFindSessionsResultDelegateDelegate.h"
#include "BlueprintSessionResult.h"
#include "FindSessionsCallbackProxy.generated.h"

class UFindSessionsCallbackProxy;
class UObject;
class APlayerController;

UCLASS(Blueprintable, MinimalAPI)
class UFindSessionsCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindSessionsResultDelegate OnFailure;
    
    UFindSessionsCallbackProxy();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static FString GetServerName(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetPingInMs(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetMaxPlayers(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    static int32 GetCurrentPlayers(const FBlueprintSessionResult& Result);
    
    UFUNCTION(BlueprintCallable)
    static UFindSessionsCallbackProxy* FindSessions(UObject* WorldContextObject, APlayerController* PlayerController, int32 MaxResults, bool bUseLAN);
    
};

