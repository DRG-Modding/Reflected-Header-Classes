#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
#include "BlueprintFriend.h"
#include "GetFriendsListBlueprintCallProxy.generated.h"

class UObject;
class UGetFriendsListBlueprintCallProxy;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetFriendsListBlueprintCallProxyOnSuccess, const TArray<FBlueprintFriend>&, Results);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FGetFriendsListBlueprintCallProxyOnFailure, const TArray<FBlueprintFriend>&, Results);

UCLASS()
class UGetFriendsListBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FGetFriendsListBlueprintCallProxyOnSuccess OnSuccess;
    
    UPROPERTY(BlueprintAssignable)
    FGetFriendsListBlueprintCallProxyOnFailure OnFailure;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static UGetFriendsListBlueprintCallProxy* GetFriendsList(UObject* NewWorldContextObject, const FString& ListName);
    
    UGetFriendsListBlueprintCallProxy();
};

