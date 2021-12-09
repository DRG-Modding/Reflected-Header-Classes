#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: ClothingSystemRuntimeInterface ClothingSimulationInteractor
#include "ClothingSimulationInteractorNv.generated.h"

UCLASS()
class CLOTHINGSYSTEMRUNTIMENV_API UClothingSimulationInteractorNv : public UClothingSimulationInteractor {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetAnimDriveDamperStiffness(float InStiffness);
    
    UClothingSimulationInteractorNv();
};

