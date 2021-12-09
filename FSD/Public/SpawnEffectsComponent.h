#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
#include "SpawnEffectsArray.h"
#include "SpawnEffectsComponent.generated.h"

class UMaterialInstance;

UCLASS()
class USpawnEffectsComponent : public UActorComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(Replicated)
    FSpawnEffectsArray ActiveEffects;
    
    UPROPERTY(Transient)
    UMaterialInstance* BiomeMaterialOverride;
    
public:
    virtual void GetLifetimeReplicatedProps(TArray<FLifetimeProperty>& OutLifetimeProps) const override;
    
    USpawnEffectsComponent();
};

