#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Interface
#include "NotifyMessageReceiver.generated.h"

UINTERFACE(Blueprintable)
class UNotifyMessageReceiver : public UInterface {
    GENERATED_BODY()
};

class INotifyMessageReceiver : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintNativeEvent)
    bool OnNotifyMessageReceived(FName TriggerName);
    
};

