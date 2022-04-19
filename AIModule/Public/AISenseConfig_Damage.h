#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig.h"
#include "AISenseConfig_Damage.generated.h"

class UAISense_Damage;

UCLASS(EditInlineNew)
class AIMODULE_API UAISenseConfig_Damage : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Config, EditDefaultsOnly, NoClear, meta=(AllowPrivateAccess=true))
    TSubclassOf<UAISense_Damage> Implementation;
    
    UAISenseConfig_Damage();
};

