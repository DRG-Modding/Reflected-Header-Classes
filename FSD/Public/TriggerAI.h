#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Interface -FallbackName=Interface
#include "TriggerAI.generated.h"

UINTERFACE(Blueprintable)
class UTriggerAI : public UInterface {
    GENERATED_BODY()
};

class ITriggerAI : public IInterface {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    bool OnTriggerAI(FName TriggerName);
    
    UFUNCTION(BlueprintCallable, BlueprintNativeEvent)
    void OnMessageAI(FName TriggerName);
    
};

