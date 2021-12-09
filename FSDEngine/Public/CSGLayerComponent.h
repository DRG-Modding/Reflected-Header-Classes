#pragma once
#include "CoreMinimal.h"
#include "CSGGroupComponent.h"
#include "MeshLayerProperties.h"
#include "GeneralTerrainMaterialCombiner.h"
#include "CSGLayerComponent.generated.h"

UCLASS(BlueprintType)
class UCSGLayerComponent : public UCSGGroupComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FMeshLayerProperties Properties;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FGeneralTerrainMaterialCombiner Materials;
    
    UCSGLayerComponent();
};

