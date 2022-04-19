#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=OnlineSession -FallbackName=OnlineSession
#include "OnlineSessionClient.generated.h"

UCLASS()
class ONLINESUBSYSTEMUTILS_API UOnlineSessionClient : public UOnlineSession {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bIsFromInvite;
    
    UPROPERTY(BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    bool bHandlingDisconnect;
    
public:
    UOnlineSessionClient();
};

