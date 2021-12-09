#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "AISenseConfig.h"
#include "AISenseConfig_Blueprint.generated.h"

class UAISense_Blueprint;

UCLASS(Abstract, EditInlineNew, HideDropdown)
class AIMODULE_API UAISenseConfig_Blueprint : public UAISenseConfig {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, Config, EditDefaultsOnly, NoClear)
    TSubclassOf<UAISense_Blueprint> Implementation;
    
    UAISenseConfig_Blueprint();
};

