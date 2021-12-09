#pragma once
#include "CoreMinimal.h"
#include "AISenseEvent.h"
#include "AINoiseEvent.h"
#include "AISenseEvent_Hearing.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class AIMODULE_API UAISenseEvent_Hearing : public UAISenseEvent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAINoiseEvent Event;
    
public:
    UAISenseEvent_Hearing();
};

