#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "BlueprintFindFriendSessionsResultDelegateDelegate.h"
#include "FindFriendSessionsBlueprintCallProxy.generated.h"

class UFindFriendSessionsBlueprintCallProxy;
class UObject;

UCLASS(Blueprintable)
class UFindFriendSessionsBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindFriendSessionsResultDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintFindFriendSessionsResultDelegate OnFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UFindFriendSessionsBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static UFindFriendSessionsBlueprintCallProxy* FindFriendSessions(UObject* NewWorldContextObject, const FString& FriendId);
    
};

