#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "EmptyFriendDelegateDelegate.h"
#include "BlueprintFriend.h"
#include "FSDFriendsAndInvites.generated.h"

UCLASS(Blueprintable)
class UFSDFriendsAndInvites : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyFriendDelegate OnFriendsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyFriendDelegate OnFriendInvitesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEmptyFriendDelegate OnRequestRefresh;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintFriend> Friends;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintFriend> FriendInvites;
    
    UFSDFriendsAndInvites();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
};

