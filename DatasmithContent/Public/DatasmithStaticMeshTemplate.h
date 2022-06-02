#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithMeshSectionInfoMapTemplate.h"
#include "DatasmithStaticMaterialTemplate.h"
#include "DatasmithMeshBuildSettingsTemplate.h"
#include "DatasmithStaticMeshTemplate.generated.h"

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FDatasmithMeshSectionInfoMapTemplate SectionInfoMap;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightMapCoordinateIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 LightMapResolution;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FDatasmithStaticMaterialTemplate> StaticMaterials;
    
    UDatasmithStaticMeshTemplate();
};

