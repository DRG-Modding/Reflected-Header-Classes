#pragma once
#include "CoreMinimal.h"
#include "DatasmithSceneImportData.h"
#include "DatasmithMDLSceneImportData.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class DATASMITHCONTENT_API UDatasmithMDLSceneImportData : public UDatasmithSceneImportData {
    GENERATED_BODY()
public:
    UDatasmithMDLSceneImportData();
};

