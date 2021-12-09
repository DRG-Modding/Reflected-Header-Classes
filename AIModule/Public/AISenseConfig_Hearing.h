#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig.h"
#include "AISenseAffiliationFilter.h"
#include "AISenseConfig_Hearing.generated.h"

class UAISense_Hearing;

UCLASS(EditInlineNew)
class AIMODULE_API UAISenseConfig_Hearing : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly, NoClear)
    TSubclassOf<UAISense_Hearing> Implementation;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float HearingRange;
    
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly)
    float LoSHearingRange;
    
    UPROPERTY(EditDefaultsOnly)
    uint8 bUseLoSHearing: 1;
    
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly)
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_Hearing();
};

