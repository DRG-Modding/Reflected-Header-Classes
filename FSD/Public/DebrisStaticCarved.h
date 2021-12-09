#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "DebrisBase.h"
//CROSS-MODULE INCLUDE: FSDEngine ECarveFilterType
#include "EDebrisCarvedType.h"
#include "UDebrisStaticCarveMesh.h"
#include "DebrisInfluence.h"
#include "DebrisStaticCarved.generated.h"

class UTerrainMaterial;
class AActor;

UCLASS(EditInlineNew)
class UDebrisStaticCarved : public UDebrisBase {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    EDebrisCarvedType carverType;
    
    UPROPERTY(EditAnywhere)
    TArray<FUDebrisStaticCarveMesh> Meshes;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* TerrainMaterial;
    
    UPROPERTY(EditAnywhere)
    FDebrisInfluence CaveInfluenceToAdd;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType Filter;
    
    UPROPERTY(EditAnywhere)
    float CarveOffsetRadius;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<AActor> SpawnAttachClass;
    
    UPROPERTY(EditAnywhere)
    float AttachSpawnOffsetDistance;
    
    UDebrisStaticCarved();
};

