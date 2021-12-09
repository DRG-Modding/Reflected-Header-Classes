#pragma once
#include "CoreMinimal.h"
#include "DatasmithStaticMaterialTemplate.generated.h"

class UMaterialInterface;

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithStaticMaterialTemplate {
    GENERATED_BODY()
public:
    UPROPERTY()
    FName MaterialSlotName;
    
    UPROPERTY()
    UMaterialInterface* MaterialInterface;
    
    FDatasmithStaticMaterialTemplate();
};

