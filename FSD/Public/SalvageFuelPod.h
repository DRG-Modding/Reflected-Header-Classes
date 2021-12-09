#pragma once
#include "CoreMinimal.h"
#include "RessuplyPod.h"
#include "SalvageFuelPod.generated.h"

class AFuelLineEndPoint;
class AFuelLineSegment;

UCLASS(Abstract)
class ASalvageFuelPod : public ARessuplyPod {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveFuelLineStarted(bool InFuelLineStarted);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveFuelLineConnected(AFuelLineEndPoint* InFuelLine);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveFirstFuelLineSegment(AFuelLineSegment* InFirstSegment);
    
    ASalvageFuelPod();
};

