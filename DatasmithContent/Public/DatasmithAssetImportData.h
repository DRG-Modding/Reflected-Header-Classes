#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AssetImportData
#include "DatasmithAssetImportData.generated.h"

UCLASS(EditInlineNew)
class DATASMITHCONTENT_API UDatasmithAssetImportData : public UAssetImportData {
    GENERATED_BODY()
public:
    UDatasmithAssetImportData();
};

