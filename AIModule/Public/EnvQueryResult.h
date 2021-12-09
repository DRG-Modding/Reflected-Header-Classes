#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryResult.generated.h"

class UEnvQueryItemType;

USTRUCT(BlueprintType)
struct AIMODULE_API FEnvQueryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly)
    TSubclassOf<UEnvQueryItemType> ItemType;
    
    UPROPERTY(BlueprintReadOnly)
    int32 OptionIndex;
    
    UPROPERTY(BlueprintReadOnly)
    int32 QueryID;
    
    FEnvQueryResult();
};

