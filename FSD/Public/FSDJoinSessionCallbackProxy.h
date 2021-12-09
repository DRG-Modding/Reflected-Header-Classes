#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE: OnlineSubsystemUtils BlueprintSessionResult
#include "FSDJoinSessionCallbackProxy.generated.h"

class UFSDJoinSessionCallbackProxy;
class UObject;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDJoinSessionCallbackProxyOnSuccess);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDJoinSessionCallbackProxyOnFailure);

UCLASS(MinimalAPI)
class UFSDJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDJoinSessionCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FFSDJoinSessionCallbackProxyOnFailure OnFailure;
    
private:
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
public:
    UFUNCTION(BlueprintCallable)
    static UFSDJoinSessionCallbackProxy* FSDJoinSession(UObject* NewWorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult, const FString& FSDPassword, bool fromInvite);
    
    UFSDJoinSessionCallbackProxy();
};

