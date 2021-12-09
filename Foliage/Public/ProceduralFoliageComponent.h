#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine ActorComponent
//CROSS-MODULE INCLUDE: CoreUObject Guid
#include "ProceduralFoliageComponent.generated.h"

class UProceduralFoliageSpawner;
class AVolume;

UCLASS(BlueprintType)
class FOLIAGE_API UProceduralFoliageComponent : public UActorComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    UProceduralFoliageSpawner* FoliageSpawner;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TileOverlap;
    
private:
    UPROPERTY()
    AVolume* SpawningVolume;
    
    UPROPERTY()
    FGuid ProceduralGuid;
    
public:
    UProceduralFoliageComponent();
};

