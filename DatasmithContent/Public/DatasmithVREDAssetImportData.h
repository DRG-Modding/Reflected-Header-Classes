#pragma once
#include "CoreMinimal.h"
#include "DatasmithAssetImportData.h"
#include "DatasmithVREDAssetImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DATASMITHCONTENT_API UDatasmithVREDAssetImportData : public UDatasmithAssetImportData {
    GENERATED_BODY()
public:
    UDatasmithVREDAssetImportData();
};

