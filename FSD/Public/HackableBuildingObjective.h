#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "Objective.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "HackableBuildingObjective.generated.h"

class AProceduralSetup;
class UDebrisPositioning;
class ARessuplyPod;

UCLASS()
class UHackableBuildingObjective : public UObjective {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void DropOverCharger(AProceduralSetup* setup, const FVector& buildingLocation, float idealRange, float idealZDistance, UDebrisPositioning* DebrisPositioning, TSubclassOf<ARessuplyPod> generatorClass);
    
    UHackableBuildingObjective();
};

