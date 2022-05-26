#pragma once
#include "CoreMinimal.h"
#include "DatasmithOptionsBase.h"
#include "EDatasmithImportAssetConflictPolicy.h"
#include "EDatasmithImportSearchPackagePolicy.h"
#include "EDatasmithImportMaterialQuality.h"
#include "EDatasmithImportActorPolicy.h"
#include "DatasmithImportBaseOptions.h"
#include "DatasmithReimportOptions.h"
#include "DatasmithImportOptions.generated.h"

UCLASS(Blueprintable, Config=EditorPerProjectUserSettings)
class DATASMITHCONTENT_API UDatasmithImportOptions : public UDatasmithOptionsBase {
    GENERATED_BODY()
public:
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportSearchPackagePolicy SearchPackagePolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportAssetConflictPolicy MaterialConflictPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportAssetConflictPolicy TextureConflictPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportActorPolicy StaticMeshActorImportPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportActorPolicy LightImportPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportActorPolicy CameraImportPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportActorPolicy OtherActorImportPolicy;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    EDatasmithImportMaterialQuality MaterialQuality;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithImportBaseOptions BaseOptions;
    
    UPROPERTY(BlueprintReadWrite, Config, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithReimportOptions ReimportOptions;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString Filename;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FString FilePath;
    
    UDatasmithImportOptions();
};

