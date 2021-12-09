#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: ClothingSystemRuntimeInterface ClothingSimulationFactory
#include "ChaosClothingSimulationFactory.generated.h"

UCLASS()
class CHAOSCLOTH_API UChaosClothingSimulationFactory : public UClothingSimulationFactory {
    GENERATED_BODY()
public:
    UChaosClothingSimulationFactory();
};

