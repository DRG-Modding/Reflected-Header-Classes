#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "RunningMissionBP.generated.h"

UCLASS(Blueprintable)
class URunningMissionBP : public UObject {
    GENERATED_BODY()
public:
    URunningMissionBP();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLogic();
    
};

