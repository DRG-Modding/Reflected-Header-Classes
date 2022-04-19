#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ClothingSimulationFactory.generated.h"

UCLASS(Abstract)
class CLOTHINGSYSTEMRUNTIMEINTERFACE_API UClothingSimulationFactory : public UObject {
    GENERATED_BODY()
public:
    UClothingSimulationFactory();
};

