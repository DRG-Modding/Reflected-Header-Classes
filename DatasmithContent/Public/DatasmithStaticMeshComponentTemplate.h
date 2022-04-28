#pragma once
#include "CoreMinimal.h"
#include "DatasmithObjectTemplate.h"
#include "DatasmithStaticMeshComponentTemplate.generated.h"

class UStaticMesh;
class UMaterialInterface;

UCLASS(Blueprintable)
class DATASMITHCONTENT_API UDatasmithStaticMeshComponentTemplate : public UDatasmithObjectTemplate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UStaticMesh* StaticMesh;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UDatasmithStaticMeshComponentTemplate();
};

