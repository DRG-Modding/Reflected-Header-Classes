#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE: OnlineSubsystemUtils BlueprintSessionResult
#include "FindFriendSessionsBlueprintCallProxy.generated.h"

class UFindFriendSessionsBlueprintCallProxy;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindFriendSessionsBlueprintCallProxyOnSuccess, const TArray<FBlueprintSessionResult>&, Results);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FFindFriendSessionsBlueprintCallProxyOnFailure, const TArray<FBlueprintSessionResult>&, Results);

UCLASS()
class UFindFriendSessionsBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFindFriendSessionsBlueprintCallProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FFindFriendSessionsBlueprintCallProxyOnFailure OnFailure;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static UFindFriendSessionsBlueprintCallProxy* FindFriendSessions(UObject* NewWorldContextObject, const FString& FriendId);
    
    UFindFriendSessionsBlueprintCallProxy();
};
