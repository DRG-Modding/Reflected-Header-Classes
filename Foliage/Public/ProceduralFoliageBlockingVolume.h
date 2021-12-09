#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine Volume
#include "ProceduralFoliageBlockingVolume.generated.h"

class AProceduralFoliageVolume;

UCLASS(MinimalAPI)
class AProceduralFoliageBlockingVolume : public AVolume {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    AProceduralFoliageVolume* ProceduralFoliageVolume;
    
    AProceduralFoliageBlockingVolume();
};

