#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=ClothingSystemRuntimeInterface -ObjectName=ClothCollisionData -FallbackName=ClothCollisionData
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Object -FallbackName=Object
#include "ClothPhysicalMeshData.h"
#include "ClothLODDataCommon_Legacy.generated.h"

class UClothPhysicalMeshDataBase_Legacy;

UCLASS()
class CLOTHINGSYSTEMRUNTIMECOMMON_API UClothLODDataCommon_Legacy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UClothPhysicalMeshDataBase_Legacy* PhysicalMeshData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FClothPhysicalMeshData ClothPhysicalMeshData;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FClothCollisionData CollisionData;
    
    UClothLODDataCommon_Legacy();
};

