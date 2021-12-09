#pragma once
#include "CoreMinimal.h"
#include "NamedSlotBinding.generated.h"

class UWidget;

USTRUCT(BlueprintType)
struct UMG_API FNamedSlotBinding {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName Name;
    
    UPROPERTY(Instanced)
    UWidget* Content;
    
    FNamedSlotBinding();
};

