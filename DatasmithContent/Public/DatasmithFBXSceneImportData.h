#pragma once
#include "CoreMinimal.h"
#include "DatasmithSceneImportData.h"
#include "DatasmithFBXSceneImportData.generated.h"

UCLASS(EditInlineNew)
class DATASMITHCONTENT_API UDatasmithFBXSceneImportData : public UDatasmithSceneImportData {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    bool bGenerateLightmapUVs;
    
    UPROPERTY(VisibleAnywhere)
    FString TexturesDir;
    
    UPROPERTY(VisibleAnywhere)
    uint8 IntermediateSerialization;
    
    UPROPERTY(VisibleAnywhere)
    bool bColorizeMaterials;
    
    UDatasmithFBXSceneImportData();
};

