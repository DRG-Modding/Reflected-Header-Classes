#pragma once
#include "CoreMinimal.h"
#include "DatasmithSceneImportData.h"
#include "DatasmithFBXSceneImportData.generated.h"

UCLASS(EditInlineNew)
class DATASMITHCONTENT_API UDatasmithFBXSceneImportData : public UDatasmithSceneImportData {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bGenerateLightmapUVs;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FString TexturesDir;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    uint8 IntermediateSerialization;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    bool bColorizeMaterials;
    
    UDatasmithFBXSceneImportData();
};

