#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
#include "SendSessionInviteToFriendBlueprintCallProxy.generated.h"

class UObject;
class USendSessionInviteToFriendBlueprintCallProxy;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSendSessionInviteToFriendBlueprintCallProxyOnSuccess);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FSendSessionInviteToFriendBlueprintCallProxyOnFailure);

UCLASS()
class USendSessionInviteToFriendBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FSendSessionInviteToFriendBlueprintCallProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FSendSessionInviteToFriendBlueprintCallProxyOnFailure OnFailure;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static USendSessionInviteToFriendBlueprintCallProxy* SendSessionInviteToFriend(UObject* NewWorldContextObject, const FString& FriendId);
    
    USendSessionInviteToFriendBlueprintCallProxy();
};

