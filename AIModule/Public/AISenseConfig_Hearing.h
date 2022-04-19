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
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense_Hearing> Implementation;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float HearingRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    float LoSHearingRange;
    
    UPROPERTY(BlueprintReadWrite, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    uint8 bUseLoSHearing: 1;
    
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    FAISenseAffiliationFilter DetectionByAffiliation;
    
    UAISenseConfig_Hearing();
};

