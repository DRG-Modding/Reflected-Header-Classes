#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: FSDEngine CarveOptionsCellSize
//CROSS-MODULE INCLUDE: FSDEngine MatrixWithExactSync
//CROSS-MODULE INCLUDE: FSDEngine ECarveFilterType
//CROSS-MODULE INCLUDE: FSDEngine EPreciousMaterialOptions
#include "CarveWithColliderOperationData.generated.h"

class UStaticMesh;
class UTerrainMaterial;

USTRUCT(BlueprintType)
struct FCarveWithColliderOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 OperationNumber;
    
    UPROPERTY(EditAnywhere)
    UStaticMesh* StaticMesh;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* Material;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType CarveFilter;
    
    UPROPERTY(EditAnywhere)
    FMatrixWithExactSync Transform;
    
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(EditAnywhere)
    EPreciousMaterialOptions Precious;
    
    UPROPERTY(EditAnywhere)
    CarveOptionsCellSize CarveCellSize;
    
    FSD_API FCarveWithColliderOperationData();
};

