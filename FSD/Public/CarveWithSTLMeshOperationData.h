#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=ECarveFilterType -FallbackName=ECarveFilterType
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=EPreciousMaterialOptions -FallbackName=EPreciousMaterialOptions
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=MatrixWithExactSync -FallbackName=MatrixWithExactSync
#include "CarveWithSTLMeshOperationData.generated.h"

class UTerrainMaterial;
class USTLMeshCarver;
class UStaticMeshCarver;

USTRUCT(BlueprintType)
struct FCarveWithSTLMeshOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    USTLMeshCarver* STLMeshCarver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMeshCarver* StaticMeshCarver;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarveFilterType CarveFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreciousMaterialOptions Precious;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrixWithExactSync Transform;
    
    FSD_API FCarveWithSTLMeshOperationData();
};

