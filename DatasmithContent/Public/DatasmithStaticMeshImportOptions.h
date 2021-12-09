#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportLightmapMax.h"
#include "EDatasmithImportLightmapMin.h"
#include "DatasmithStaticMeshImportOptions.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithStaticMeshImportOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDatasmithImportLightmapMin MinLightmapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EDatasmithImportLightmapMax MaxLightmapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bGenerateLightmapUVs;
    
    UPROPERTY(BlueprintReadWrite, Transient)
    bool bRemoveDegenerates;
    
    FDatasmithStaticMeshImportOptions();
};

