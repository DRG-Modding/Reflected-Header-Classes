#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "NotifyMessageReceiver.generated.h"

UINTERFACE(Blueprintable)
class UNotifyMessageReceiver : public UInterface {
    GENERATED_BODY()
};

class INotifyMessageReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnNotifyMessageReceived(FName TriggerName);
    
};

