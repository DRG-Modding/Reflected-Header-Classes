#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "FormationsManagerComponent.generated.h"

class UEnemySpawnManager;
class UFormationData;

UCLASS()
class UFormationsManagerComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Export, Transient)
    UEnemySpawnManager* SpawnManager;
    
    UPROPERTY(EditAnywhere)
    TArray<UFormationData*> FormationData;
    
public:
    UFormationsManagerComponent();
};

