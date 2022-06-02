#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=CarveSplineSegment -FallbackName=CarveSplineSegment
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=ECarveFilterType -FallbackName=ECarveFilterType
//CROSS-MODULE INCLUDE V2: -ModuleName=FSDEngine -ObjectName=EPreciousMaterialOptions -FallbackName=EPreciousMaterialOptions
#include "SplineSegmentCarveOperationData.generated.h"

class UTerrainMaterial;

USTRUCT(BlueprintType)
struct FSplineSegmentCarveOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 OperationNumber;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FCarveSplineSegment> Segments;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UTerrainMaterial* Material;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    ECarveFilterType CarveFilter;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EPreciousMaterialOptions Precious;
    
    FSD_API FSplineSegmentCarveOperationData();
};

