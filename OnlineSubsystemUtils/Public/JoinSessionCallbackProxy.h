#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=EmptyOnlineDelegate__DelegateSignature -FallbackName=EmptyOnlineDelegateDelegate
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "BlueprintSessionResult.h"
#include "JoinSessionCallbackProxy.generated.h"

class UJoinSessionCallbackProxy;
class UObject;
class APlayerController;

UCLASS(MinimalAPI)
class UJoinSessionCallbackProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyOnlineDelegate OnFailure;
    
    UJoinSessionCallbackProxy();
    UFUNCTION(BlueprintCallable)
    static UJoinSessionCallbackProxy* JoinSession(UObject* WorldContextObject, APlayerController* PlayerController, const FBlueprintSessionResult& SearchResult);
    
};

