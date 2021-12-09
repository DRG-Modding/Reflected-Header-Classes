#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "TerrainMaterialsCollection.generated.h"

class UTerrainType;
class UTerrainMaterial;

UCLASS(MinimalAPI)
class UTerrainMaterialsCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(Transient)
    TArray<UTerrainMaterial*> Materials;
    
    UPROPERTY(Transient)
    TArray<UTerrainType*> TerrainTypes;
    
    UTerrainMaterialsCollection();
};

