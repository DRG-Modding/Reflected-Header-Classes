#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
#include "BlueprintSessionResult.h"
#include "JoinSessionCallbackProxy.generated.h"

class UJoinSessionCallbackProxy;
class UObject;
class APlayerController;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FJoinSessionCallbackProxyOnSuccess);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FJoinSessionCallbackProxyOnFailure);

UCLASS(MinimalAPI)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FJoinSessionCallbackProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FJoinSessionCallbackProxyOnFailure OnFailure;
    
    UFUNCTION(BlueprintCallable)
    static UJoinSessionCallbackProxy* JoinSession(UObject* WorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult);
    
    UJoinSessionCallbackProxy();
};

