#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=DataAsset -FallbackName=DataAsset
#include "SchematicBankInterface.h"
#include "SchematicBankBase.generated.h"

UCLASS()
class FSD_API USchematicBankBase : public UDataAsset, public ISchematicBankInterface {
    GENERATED_BODY()
public:
    USchematicBankBase();
    
    // Fix for true pure virtual functions not being implemented
};

