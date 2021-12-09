#pragma once
#include "CoreMinimal.h"
#include "BTAuxiliaryNode.h"
#include "BTService.generated.h"

UCLASS(Abstract)
class AIMODULE_API UBTService : public UBTAuxiliaryNode {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    float Interval;
    
    UPROPERTY(EditAnywhere)
    float RandomDeviation;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bCallTickOnSearchStart: 1;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    uint8 bRestartTimerOnEachActivation: 1;
    
public:
    UBTService();
};

