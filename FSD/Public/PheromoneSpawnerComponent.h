#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=ActorComponent -FallbackName=ActorComponent
#include "RandRange.h"
#include "PheromoneSpawnerComponent.generated.h"

class UEnemyDescriptor;
class AActor;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UPheromoneSpawnerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FRandRange SpawnInterval;
    
    UPROPERTY(EditAnywhere)
    float AttackPositioningCostModifier;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UEnemyDescriptor* enemy;
    
    UPROPERTY(EditAnywhere, Transient)
    TMap<AActor*, float> InfectedActors;
    
public:
    UPheromoneSpawnerComponent();
};

