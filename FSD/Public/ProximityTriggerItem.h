#pragma once
#include "CoreMinimal.h"
#include "ProximityTriggerItem.generated.h"

class APlayerCharacter;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_TwoParams(FProximityTriggerItemCallback, APlayerCharacter*, Player, bool, enteredTrigger);

USTRUCT(BlueprintType)
struct FProximityTriggerItem {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FProximityTriggerItemCallback Callback;
    
    FSD_API FProximityTriggerItem();
};

