#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "BlueprintFriend.h"
#include "FSDFriendsAndInvites.generated.h"

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDFriendsAndInvitesOnFriendsChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDFriendsAndInvitesOnFriendInvitesChanged);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FFSDFriendsAndInvitesOnRequestRefresh);

UCLASS(Blueprintable)
class UFSDFriendsAndInvites : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDFriendsAndInvitesOnFriendsChanged OnFriendsChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDFriendsAndInvitesOnFriendInvitesChanged OnFriendInvitesChanged;
    
    UPROPERTY(BlueprintAssignable, BlueprintCallable)
    FFSDFriendsAndInvitesOnRequestRefresh OnRequestRefresh;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FBlueprintFriend> Friends;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    TArray<FBlueprintFriend> FriendInvites;
    
    UFUNCTION(BlueprintImplementableEvent)
    void Init();
    
    UFSDFriendsAndInvites();
};

