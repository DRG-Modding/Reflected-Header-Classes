#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "LineSegmentCarverPoint.generated.h"

USTRUCT(BlueprintType)
struct FLineSegmentCarverPoint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVector Position;
    
    UPROPERTY(EditAnywhere)
    float HRange;
    
    UPROPERTY(EditAnywhere)
    float VRange;
    
    UPROPERTY(EditAnywhere)
    float FloorAngle;
    
    UPROPERTY(EditAnywhere)
    float CielingNoiseRange;
    
    UPROPERTY(EditAnywhere)
    float WallNoiseRange;
    
    UPROPERTY(EditAnywhere)
    float FloorNoiseRange;
    
    FSD_API FLineSegmentCarverPoint();
};

