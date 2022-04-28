#pragma once
#include "CoreMinimal.h"
#include "DatasmithSceneImportData.h"
#include "DatasmithIFCSceneImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DATASMITHCONTENT_API UDatasmithIFCSceneImportData : public UDatasmithSceneImportData {
    GENERATED_BODY()
public:
    UDatasmithIFCSceneImportData();
};

