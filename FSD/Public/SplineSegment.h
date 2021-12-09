#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SplineSegment.generated.h"

USTRUCT(BlueprintType)
struct FSplineSegment {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector StartLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector StartTangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EndLocation;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector EndTangent;
    
    FSD_API FSplineSegment();
};

