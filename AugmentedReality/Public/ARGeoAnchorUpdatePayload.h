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
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FARSessionPayload SessionPayload;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTransform WorldTransform;
    
    UPROPERTY(EditAnywhere)
    float Longitude;
    
    UPROPERTY(EditAnywhere)
    float Latitude;
    
    UPROPERTY(EditAnywhere)
    float AltitudeMeters;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EARAltitudeSource AltitudeSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString AnchorName;
    
    AUGMENTEDREALITY_API FARGeoAnchorUpdatePayload();
};

