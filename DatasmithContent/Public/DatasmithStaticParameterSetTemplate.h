#pragma once
#include "CoreMinimal.h"
#include "DatasmithStaticParameterSetTemplate.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithStaticParameterSetTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    TMap<FName, bool> StaticSwitchParameters;
    
    FDatasmithStaticParameterSetTemplate();
};

