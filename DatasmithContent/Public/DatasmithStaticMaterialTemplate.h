#pragma once
#include "CoreMinimal.h"
#include "DatasmithStaticMaterialTemplate.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithStaticMaterialTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName MaterialSlotName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* MaterialInterface;
    
    FDatasmithStaticMaterialTemplate();
};

