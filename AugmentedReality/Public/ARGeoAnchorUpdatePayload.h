#pragma once
#include "CoreMinimal.h"
#include "ARSessionPayload.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Transform -FallbackName=Transform
#include "EARAltitudeSource.h"
#include "ARGeoAnchorUpdatePayload.generated.h"

USTRUCT(BlueprintType)
struct FARGeoAnchorUpdatePayload {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FARSessionPayload SessionPayload;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FTransform WorldTransform;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Longitude;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float Latitude;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float AltitudeMeters;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EARAltitudeSource AltitudeSource;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString AnchorName;
    
    AUGMENTEDREALITY_API FARGeoAnchorUpdatePayload();
};

