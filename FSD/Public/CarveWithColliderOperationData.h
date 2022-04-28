#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=ECarveFilterType -FallbackName=ECarveFilterType
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=CarveOptionsCellSize -FallbackName=CarveOptionsCellSize
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=EPreciousMaterialOptions -FallbackName=EPreciousMaterialOptions
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=MatrixWithExactSync -FallbackName=MatrixWithExactSync
#include "CarveWithColliderOperationData.generated.h"

class UStaticMesh;
class UTerrainMaterial;

USTRUCT(BlueprintType)
struct FCarveWithColliderOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarveFilterType CarveFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrixWithExactSync Transform;
    
    UPROPERTY(EditAnywhere)
    float ExpensiveNoise;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreciousMaterialOptions Precious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    CarveOptionsCellSize CarveCellSize;
    
    FSD_API FCarveWithColliderOperationData();
};

