#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine OnlineSession
#include "OnlineSessionClient.generated.h"

UCLASS()
class ONLINESUBSYSTEMUTILS_API UOnlineSessionClient : public UOnlineSession {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Transient)
    bool bIsFromInvite;
    
    UPROPERTY(Transient)
    bool bHandlingDisconnect;
    
public:
    UOnlineSessionClient();
};

