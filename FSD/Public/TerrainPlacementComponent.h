#pragma once
#include "CoreMinimal.h"
#include "TerrainPlacementBox.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "EDebrisColliderType.h"
//CROSS-MODULE INCLUDE: CoreUObject Transform
#include "DebrisCapsule.h"
#include "TerrainPlacementComponent.generated.h"

class AProceduralSetup;

UCLASS(BlueprintType)
class FSD_API UTerrainPlacementComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TArray<FTerrainPlacementBox> TerrainCheckers;
    
    UPROPERTY(EditAnywhere)
    EDebrisColliderType CapsuleType;
    
    UPROPERTY(EditAnywhere)
    FDebrisCapsule Capsule;
    
    UPROPERTY(Transient)
    int32 BlockerIDHack;
    
    UFUNCTION(BlueprintCallable)
    void RemoveBlockers();
    
    UFUNCTION(BlueprintCallable)
    void AddBlockers(AProceduralSetup* ProceduralSetup, const FTransform& Transform);
    
    UTerrainPlacementComponent();
};

