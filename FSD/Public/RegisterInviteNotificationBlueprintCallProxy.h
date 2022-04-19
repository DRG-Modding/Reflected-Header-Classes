#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineBlueprintCallProxyBase -FallbackName=OnlineBlueprintCallProxyBase
#include "BlueprintRegisterInvitiNotificationDelegateDelegate.h"
#include "RegisterInviteNotificationBlueprintCallProxy.generated.h"

class URegisterInviteNotificationBlueprintCallProxy;
class UObject;

UCLASS()
class URegisterInviteNotificationBlueprintCallProxy : public UOnlineBlueprintCallProxyBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterInvitiNotificationDelegate OnInviteReceived;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterInvitiNotificationDelegate OnInviteAccepted;
    
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FBlueprintRegisterInvitiNotificationDelegate OnInviteRejected;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    UObject* WorldContextObject;
    
    URegisterInviteNotificationBlueprintCallProxy();
    UFUNCTION(BlueprintCallable)
    static URegisterInviteNotificationBlueprintCallProxy* RegisterInvitiNotification(UObject* NewWorldContextObject);
    
};

