#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "DroneAbillityStatsComponent.generated.h"

UCLASS()
class UDroneAbillityStatsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    bool UseOwnArmorDamageMultiplier;
    
public:
    UDroneAbillityStatsComponent();
};

