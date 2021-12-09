#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: FSDEngine CarveSplineSegment
//CROSS-MODULE INCLUDE: FSDEngine ECarveFilterType
//CROSS-MODULE INCLUDE: FSDEngine EPreciousMaterialOptions
#include "SplineSegmentCarveOperationData.generated.h"

class UTerrainMaterial;

USTRUCT(BlueprintType)
struct FSplineSegmentCarveOperationData {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    int32 OperationNumber;
    
    UPROPERTY(EditAnywhere)
    TArray<FCarveSplineSegment> Segments;
    
    UPROPERTY(EditAnywhere)
    UTerrainMaterial* Material;
    
    UPROPERTY(EditAnywhere)
    ECarveFilterType CarveFilter;
    
    UPROPERTY(EditAnywhere)
    EPreciousMaterialOptions Precious;
    
    FSD_API FSplineSegmentCarveOperationData();
};

