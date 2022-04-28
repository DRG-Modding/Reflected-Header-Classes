#pragma once
#include "CoreMinimal.h"
#include "DatasmithAssetImportData.h"
#include "DatasmithStaticMeshImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DATASMITHCONTENT_API UDatasmithStaticMeshImportData : public UDatasmithAssetImportData {
    GENERATED_BODY()
public:
    UDatasmithStaticMeshImportData();
};

