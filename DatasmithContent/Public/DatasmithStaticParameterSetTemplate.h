#pragma once
#include "CoreMinimal.h"
#include "DatasmithStaticParameterSetTemplate.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithStaticParameterSetTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, bool> StaticSwitchParameters;
    
    FDatasmithStaticParameterSetTemplate();
};

