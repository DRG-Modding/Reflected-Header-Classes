#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "ResourceCreator.h"
//CROSS-MODULE INCLUDE: FSDEngine ECarveFilterType
//CROSS-MODULE INCLUDE: FSDEngine CarveOptionsCellSize
#include "IRandRange.h"
#include "UDebrisCarveMesh.h"
#include "ResourceDebris.h"
#include "CarvedResourceCreator.generated.h"

class UTerrainMaterial;
class UCarvedResourceData;
class UDebrisPositioning;
class AActor;

UCLASS(BlueprintType, EditInlineNew)
class UCarvedResourceCreator : public UResourceCreator {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UCarvedResourceData* Resource;
    
    UPROPERTY(EditAnywhere)
    bool ScaleToResourceDistribution;
    
    UPROPERTY(EditAnywhere, Instanced)
    UDebrisPositioning* Positioning;
    
    UPROPERTY(EditAnywhere)
    FIRandRange NumCarvers;
    
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(EditAnywhere)
    float CarveOffsetRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> SpawnAttachClass;
    
    UPROPERTY(EditAnywhere)
    float AttachSpawnOffsetDistance;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    UTerrainMaterial* TerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType Filter;
    
    UPROPERTY(EditAnywhere)
    CarveOptionsCellSize CarveCellSize;
    
    UPROPERTY(EditAnywhere)
    TArray<FUDebrisCarveMesh> Meshes;
    
    UPROPERTY(EditAnywhere)
    TArray<FResourceDebris> Debris;
    
    UCarvedResourceCreator();
};

