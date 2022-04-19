#pragma once
#include "CoreMinimal.h"
#include "EDatasmithImportSearchPackagePolicy.h"
#include "DatasmithOptionsBase.h"
#include "DatasmithReimportOptions.h"
#include "EDatasmithImportMaterialQuality.h"
#include "EDatasmithImportAssetConflictPolicy.h"
#include "DatasmithImportBaseOptions.h"
#include "EDatasmithImportActorPolicy.h"
#include "DatasmithImportOptions.generated.h"

UCLASS(BlueprintType, Config=EditorPerProjectUserSettings)
class DATASMITHCONTENT_API UDatasmithImportOptions : public UDatasmithOptionsBase {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportSearchPackagePolicy SearchPackagePolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportAssetConflictPolicy TextureConflictPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportActorPolicy StaticMeshActorImportPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportActorPolicy LightImportPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportActorPolicy CameraImportPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportActorPolicy OtherActorImportPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportMaterialQuality MaterialQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithImportBaseOptions BaseOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithReimportOptions ReimportOptions;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
    UDatasmithImportOptions();
};

