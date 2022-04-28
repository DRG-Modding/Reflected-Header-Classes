#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "UDebrisCarveMesh.h"
#include "DebrisBase.h"
#include "EDebrisCarvedType.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=CarveOptionsCellSize -FallbackName=CarveOptionsCellSize
#include "DebrisInfluence.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=ECarveFilterType -FallbackName=ECarveFilterType
#include "DebrisCarved.generated.h"

class AActor;
class UTerrainMaterial;

UCLASS(Blueprintable, EditInlineNew)
class UDebrisCarved : public UDebrisBase {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EDebrisCarvedType CarverType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FUDebrisCarveMesh> Meshes;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* TerrainMaterial;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDebrisInfluence CaveInfluenceToAdd;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarveFilterType Filter;
    
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CarveOptionsCellSize CarveCellSize;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MinNumCarves;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 MaxNumCarves;
    
    UPROPERTY(EditAnywhere)
    float CarveOffsetRadius;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<AActor> SpawnAttachClass;
    
    UPROPERTY(EditAnywhere)
    float AttachSpawnOffsetDistance;
    
    UDebrisCarved();
};

