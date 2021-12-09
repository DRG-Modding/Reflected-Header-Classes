#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
#include "BlueprintFriend.h"
#include "RegisterInviteNotificationBlueprintCallProxy.generated.h"

class URegisterInviteNotificationBlueprintCallProxy;
class UObject;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegisterInviteNotificationBlueprintCallProxyOnInviteReceived, const FBlueprintFriend&, Results);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegisterInviteNotificationBlueprintCallProxyOnInviteAccepted, const FBlueprintFriend&, Results);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegisterInviteNotificationBlueprintCallProxyOnInviteRejected, const FBlueprintFriend&, Results);

UCLASS()
class URegisterInviteNotificationBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRegisterInviteNotificationBlueprintCallProxyOnInviteReceived OnInviteReceived;
    
    UPROPERTY(BlueprintAssignable)
    FRegisterInviteNotificationBlueprintCallProxyOnInviteAccepted OnInviteAccepted;
    
    UPROPERTY(BlueprintAssignable)
    FRegisterInviteNotificationBlueprintCallProxyOnInviteRejected OnInviteRejected;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static URegisterInviteNotificationBlueprintCallProxy* RegisterInvitiNotification(UObject* NewWorldContextObject);
    
    URegisterInviteNotificationBlueprintCallProxy();
};

