#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "RandRange.h"
#include "PheromoneSpawnerComponent.generated.h"

class UEnemyDescriptor;
class AActor;

UCLASS()
class UPheromoneSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    FRandRange SpawnInterval;
    
    UPROPERTY(EditAnywhere)
    float AttackPositioningCostModifier;
    
    UPROPERTY(EditAnywhere)
    UEnemyDescriptor* enemy;
    
    UPROPERTY(Transient)
    TMap<AActor*, float> InfectedActors;
    
public:
    UPheromoneSpawnerComponent();
};

