#pragma once
#include "CoreMinimal.h"
#include "DatasmithOptionsBase.h"
#include "EDatasmithImportSearchPackagePolicy.h"
#include "DatasmithReimportOptions.h"
#include "EDatasmithImportMaterialQuality.h"
#include "EDatasmithImportActorPolicy.h"
#include "EDatasmithImportAssetConflictPolicy.h"
#include "DatasmithImportBaseOptions.h"
#include "DatasmithImportOptions.generated.h"

UCLASS(BlueprintType, Config=EditorPerProjectUserSettings)
class DATASMITHCONTENT_API UDatasmithImportOptions : public UDatasmithOptionsBase {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, Transient)
    EDatasmithImportSearchPackagePolicy SearchPackagePolicy;
    
    UPROPERTY(AdvancedDisplay, Transient)
    EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;
    
    UPROPERTY(AdvancedDisplay, Transient)
    EDatasmithImportAssetConflictPolicy TextureConflictPolicy;
    
    UPROPERTY(AdvancedDisplay, Transient)
    EDatasmithImportActorPolicy StaticMeshActorImportPolicy;
    
    UPROPERTY(AdvancedDisplay, Transient)
    EDatasmithImportActorPolicy LightImportPolicy;
    
    UPROPERTY(AdvancedDisplay, Transient)
    EDatasmithImportActorPolicy CameraImportPolicy;
    
    UPROPERTY(AdvancedDisplay, Transient)
    EDatasmithImportActorPolicy OtherActorImportPolicy;
    
    UPROPERTY(AdvancedDisplay, Transient)
    EDatasmithImportMaterialQuality MaterialQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FDatasmithImportBaseOptions BaseOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere)
    FDatasmithReimportOptions ReimportOptions;
    
    UPROPERTY(BlueprintReadWrite)
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite)
    FString FilePath;
    
    UDatasmithImportOptions();
};

