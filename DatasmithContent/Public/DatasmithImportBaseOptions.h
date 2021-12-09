#pragma once
#include "CoreMinimal.h"
#include "DatasmithAssetImportOptions.h"
#include "EDatasmithImportScene.h"
#include "DatasmithStaticMeshImportOptions.h"
#include "DatasmithImportBaseOptions.generated.h"

USTRUCT(BlueprintType)
struct DATASMITHCONTENT_API FDatasmithImportBaseOptions {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Transient)
    EDatasmithImportScene SceneHandling;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bIncludeGeometry;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bIncludeMaterial;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bIncludeLight;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bIncludeCamera;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    bool bIncludeAnimation;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite)
    FDatasmithAssetImportOptions AssetOptions;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Config, EditAnywhere)
    FDatasmithStaticMeshImportOptions StaticMeshOptions;
    
    FDatasmithImportBaseOptions();
};

