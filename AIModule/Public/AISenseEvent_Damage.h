#pragma once
#include "CoreMinimal.h"
#include "AISenseEvent.h"
#include "AIDamageEvent.h"
#include "AISenseEvent_Damage.generated.h"

UCLASS(BlueprintType, EditInlineNew)
class AIMODULE_API UAISenseEvent_Damage : public UAISenseEvent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FAIDamageEvent Event;
    
    UAISenseEvent_Damage();
};

