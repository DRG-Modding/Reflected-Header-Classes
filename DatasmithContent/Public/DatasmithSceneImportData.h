#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine AssetImportData
#include "DatasmithSceneImportData.generated.h"

UCLASS(EditInlineNew)
class DATASMITHCONTENT_API UDatasmithSceneImportData : public UAssetImportData {
    GENERATED_BODY()
public:
    UDatasmithSceneImportData();
};

