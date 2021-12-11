#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "RunningMissionBP.generated.h"

UCLASS(Blueprintable)
class URunningMissionBP : public UObject {
    GENERATED_BODY()
public:
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void StartLogic();
    
public:
    URunningMissionBP();
};

