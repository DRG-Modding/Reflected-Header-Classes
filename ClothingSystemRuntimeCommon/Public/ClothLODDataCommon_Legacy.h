#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
//CROSS-MODULE INCLUDE: ClothingSystemRuntimeInterface ClothCollisionData
#include "ClothPhysicalMeshData.h"
#include "ClothLODDataCommon_Legacy.generated.h"

class UClothPhysicalMeshDataBase_Legacy;

UCLASS()
class CLOTHINGSYSTEMRUNTIMECOMMON_API UClothLODDataCommon_Legacy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY()
    UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData;
    
    UPROPERTY()
    FClothPhysicalMeshData ClothPhysicalMeshData;
    
    UPROPERTY()
    FClothCollisionData CollisionData;
    
    UClothLODDataCommon_Legacy();
};

