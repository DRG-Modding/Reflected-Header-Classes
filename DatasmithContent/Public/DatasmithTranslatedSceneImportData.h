#pragma once
#include "CoreMinimal.h"
#include "DatasmithSceneImportData.h"
#include "DatasmithTranslatedSceneImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DATASMITHCONTENT_API UDatasmithTranslatedSceneImportData : public UDatasmithSceneImportData {
    GENERATED_BODY()
public:
    UDatasmithTranslatedSceneImportData();
};

