#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithMeshSectionInfoMapTemplate.h"
#include "DatasmithMeshBuildSettingsTemplate.h"
#include "DatasmithStaticMaterialTemplate.h"
#include "DatasmithStaticMeshTemplate.generated.h"

UCLASS()
class DATASMITHCONTENT_API UDatasmithStaticMeshTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(VisibleAnywhere)
    FDatasmithMeshSectionInfoMapTemplate SectionInfoMap;
    
    UPROPERTY(VisibleAnywhere)
    int32 LightMapCoordinateIndex;
    
    UPROPERTY(VisibleAnywhere)
    int32 LightMapResolution;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FDatasmithMeshBuildSettingsTemplate> BuildSettings;
    
    UPROPERTY(VisibleAnywhere)
    TArray<FDatasmithStaticMaterialTemplate> StaticMaterials;
    
    UDatasmithStaticMeshTemplate();
};

