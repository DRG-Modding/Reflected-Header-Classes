#pragma once
#include "CoreMinimal.h"
#include "LandscapeSplineConnection.generated.h"

class ULandscapeSplineSegment;

USTRUCT(BlueprintType)
struct FLandscapeSplineConnection {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    ULandscapeSplineSegment* Segment;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint8 End: 1;
    
    LANDSCAPE_API FLandscapeSplineConnection();
};

