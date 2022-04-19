#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithMeshSectionInfoMapTemplate.h"
#include "DatasmithStaticMaterialTemplate.h"
#include "DatasmithMeshBuildSettingsTemplate.h"
#include "DatasmithStaticMeshTemplate.generated.h"

UCLASS()
class DATASMITHCONTENT_API UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithMeshSectionInfoMapTemplate SectionInfoMap;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightMapCoordinateIndex;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightMapResolution;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings;
    
    UPROPERTY(BlueprintReadWrite, VisibleAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatasmithStaticMaterialTemplate> StaticMaterials;
    
    UDatasmithStaticMeshTemplate();
};

