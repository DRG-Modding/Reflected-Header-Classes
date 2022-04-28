#pragma once
#include "CoreMinimal.h"
#include "DatasmithAssetImportData.h"
#include "DatasmithDeltaGenAssetImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DATASMITHCONTENT_API UDatasmithDeltaGenAssetImportData : public UDatasmithAssetImportData {
    GENERATED_BODY()
public:
    UDatasmithDeltaGenAssetImportData();
};

