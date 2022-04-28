#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "BlueprintRegisterSessionInviteNotificationDelegateDelegate.h"
#include "RegisterSessionInviteNotificationBlueprintCallProxy.generated.h"

class UObject;
class URegisterSessionInviteNotificationBlueprintCallProxy;

UCLASS(Blueprintable)
class URegisterSessionInviteNotificationBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterSessionInviteNotificationDelegate OnSessionUserInviteAccepted;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    URegisterSessionInviteNotificationBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static URegisterSessionInviteNotificationBlueprintCallProxy* RegisterSessionInviteNotification(UObject* NewWorldContextObject);
    
};

