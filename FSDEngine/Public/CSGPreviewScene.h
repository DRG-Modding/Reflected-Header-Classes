#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine DataAsset
#include "BakeSettings.h"
#include "CSGPreviewScene.generated.h"

class ACSGBuilder;
class UTerrainMaterialCore;

UCLASS()
class UCSGPreviewScene : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    TSubclassOf<ACSGBuilder> Mesh;
    
    UPROPERTY(EditAnywhere)
    FBakeSettings Settings;
    
    UPROPERTY(EditAnywhere)
    int32 Seed;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterialCore* TerrainMaterial;
    
    UCSGPreviewScene();
};

