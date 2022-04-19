#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig.h"
#include "AISenseAffiliationFilter.h"
#include "AISenseConfig_Sight.generated.h"

class UAISense_Sight;

UCLASS(EditInlineNew)
class AIMODULE_API UAISenseConfig_Sight : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense_Sight> Implementation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float SightRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float LoseSightRadius;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float PeripheralVisionAngleDegrees;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float AutoSuccessRangeFromLastSeenLocation;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float PointOfViewBackwardOffset;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float NearClippingRadius;
    
    UAISenseConfig_Sight();
};

