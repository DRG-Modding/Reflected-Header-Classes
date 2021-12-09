#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: AIModule BTDecorator
#include "BTDecorator_RandomChance.generated.h"

UCLASS()
class UBTDecorator_RandomChance : public UBTDecorator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float Chance;
    
    UBTDecorator_RandomChance();
};

