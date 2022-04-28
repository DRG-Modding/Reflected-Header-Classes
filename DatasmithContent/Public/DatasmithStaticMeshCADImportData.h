#pragma once
#include "CoreMinimal.h"
#include "DatasmithStaticMeshImportData.h"
#include "DatasmithStaticMeshCADImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DATASMITHCONTENT_API UDatasmithStaticMeshCADImportData : public UDatasmithStaticMeshImportData {
    GENERATED_BODY()
public:
    UDatasmithStaticMeshCADImportData();
};

