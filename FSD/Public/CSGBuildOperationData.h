#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=MatrixWithExactSync -FallbackName=MatrixWithExactSync
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=BakeSettings -FallbackName=BakeSettings
#include "CSGBuildOperationData.generated.h"

class ACSGBuilder;

USTRUCT(BlueprintType)
struct FCSGBuildOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TSubclassOf<ACSGBuilder> CSGModel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FBakeSettings CarverSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMatrixWithExactSync Transform;
    
    FSD_API FCSGBuildOperationData();
};

