#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "EnvQueryResult.generated.h"

class UEnvQueryItemType;

USTRUCT(BlueprintType)
struct AIMODULE_API FEnvQueryResult {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TSubclassOf<UEnvQueryItemType> ItemType;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 OptionIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 QueryID;
    
    FEnvQueryResult();
};

