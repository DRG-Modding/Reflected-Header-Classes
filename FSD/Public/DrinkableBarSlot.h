#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "DrinkableBarSlot.generated.h"

class ADrinkableActor;

USTRUCT(BlueprintType)
struct FDrinkableBarSlot {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    FVector WorldLocation;
    
    UPROPERTY(Transient)
    TWeakObjectPtr<ADrinkableActor> DrinkableActor;
    
    FSD_API FDrinkableBarSlot();
};

