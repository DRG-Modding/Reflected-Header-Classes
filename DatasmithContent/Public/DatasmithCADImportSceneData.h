#pragma once
#include "CoreMinimal.h"
#include "DatasmithSceneImportData.h"
#include "DatasmithCADImportSceneData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DATASMITHCONTENT_API UDatasmithCADImportSceneData : public UDatasmithSceneImportData {
    GENERATED_BODY()
public:
    UDatasmithCADImportSceneData();
};

