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
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly, NoClear)
    TSubclassOf<UAISense_Sight> Implementation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float SightRadius;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float LoseSightRadius;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float PeripheralVisionAngleDegrees;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    float AutoSuccessRangeFromLastSeenLocation;
    
    UAISenseConfig_Sight();
};

