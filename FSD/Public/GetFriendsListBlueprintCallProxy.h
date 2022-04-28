#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "BlueprintGetFriendsListDelegateDelegate.h"
#include "GetFriendsListBlueprintCallProxy.generated.h"

class UObject;
class UGetFriendsListBlueprintCallProxy;

UCLASS(Blueprintable)
class UGetFriendsListBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGetFriendsListDelegate OnSuccess;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintGetFriendsListDelegate OnFailure;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    UGetFriendsListBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static UGetFriendsListBlueprintCallProxy* GetFriendsList(UObject* NewWorldContextObject, const FString& ListName);
    
};

