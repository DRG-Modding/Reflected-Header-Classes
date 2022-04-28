#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig.h"
#include "AISenseAffiliationFilter.h"
#include "AISenseConfig_Sight.generated.h"

class UAISense_Sight;

UCLASS(Blueprintable, EditInlineNew)
class AIMODULE_API UAISenseConfig_Sight : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense_Sight> Implementation;
    
    UPROPERTY(Config, EditAnywhere)
    float SightRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float LoseSightRadius;
    
    UPROPERTY(Config, EditAnywhere)
    float PeripheralVisionAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UPROPERTY(Config, EditAnywhere)
    float AutoSuccessRangeFromLastSeenLocation;
    
    UPROPERTY(Config, EditAnywhere)
    float PointOfViewBackwardOffset;
    
    UPROPERTY(Config, EditAnywhere)
    float NearClippingRadius;
    
    UAISenseConfig_Sight();
};

