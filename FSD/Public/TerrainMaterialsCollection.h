#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "TerrainMaterialsCollection.generated.h"

class UTerrainMaterial;
class UTerrainType;

UCLASS(Blueprintable, MinimalAPI)
class UTerrainMaterialsCollection : public UDataAsset {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTerrainMaterial*> Materials;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    TArray<UTerrainType*> TerrainTypes;
    
    UTerrainMaterialsCollection();
};

