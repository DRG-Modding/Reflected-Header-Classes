#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=AssetImportData -FallbackName=AssetImportData
#include "DatasmithSceneImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DATASMITHCONTENT_API UDatasmithSceneImportData : public UAssetImportData {
    GENERATED_BODY()
public:
    UDatasmithSceneImportData();
};

