#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineBlueprintCallProxyBase
//CROSS-MODULE INCLUDE: OnlineSubsystemUtils BlueprintSessionResult
#include "RegisterSessionInviteNotificationBlueprintCallProxy.generated.h"

class UObject;
class URegisterSessionInviteNotificationBlueprintCallProxy;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FRegisterSessionInviteNotificationBlueprintCallProxyOnSessionUserInviteAccepted, const FBlueprintSessionResult&, SessionInvite);

UCLASS()
class URegisterSessionInviteNotificationBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FRegisterSessionInviteNotificationBlueprintCallProxyOnSessionUserInviteAccepted OnSessionUserInviteAccepted;
    
    UPROPERTY(Transient)
    UObject* WorldContextObject;
    
    UFUNCTION(BlueprintCallable)
    static URegisterSessionInviteNotificationBlueprintCallProxy* RegisterSessionInviteNotification(UObject* NewWorldContextObject);
    
    URegisterSessionInviteNotificationBlueprintCallProxy();
};

