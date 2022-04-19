#pragma once
#include "CoreMinimal.h"
#include "DatasmithStaticMaterialTemplate.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithStaticMaterialTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInterface;
    
    FDatasmithStaticMaterialTemplate();
};

