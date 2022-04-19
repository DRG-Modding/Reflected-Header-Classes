#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithStaticMeshComponentTemplate.generated.h"

class UStaticMesh;
class UMaterialInterface;

UCLASS()
class DATASMITHCONTENT_API UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UDatasmithStaticMeshComponentTemplate();
};

