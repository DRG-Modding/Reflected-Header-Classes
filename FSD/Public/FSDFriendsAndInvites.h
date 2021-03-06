#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "BlueprintFriend.h"
#include "EmptyFriendDelegateDelegate.h"
#include "FSDFriendsAndInvites.generated.h"

UCLASS(Blueprintable)
class UFSDFriendsAndInvites : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyFriendDelegate OnFriendsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyFriendDelegate OnFriendInvitesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FEmptyFriendDelegate OnRequestRefresh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintFriend> Friends;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<FBlueprintFriend> FriendInvites;
    
    UFSDFriendsAndInvites();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void Init();
    
};

