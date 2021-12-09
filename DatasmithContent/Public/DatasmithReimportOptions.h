#pragma once
#include "CoreMinimal.h"
#include "DatasmithReimportOptions.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithReimportOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bUpdateActors;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bRespawnDeletedActors;
    
    FDatasmithReimportOptions();
};

