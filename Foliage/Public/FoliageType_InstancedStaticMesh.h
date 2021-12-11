#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
#include "FoliageType.h"
#include "FoliageType_InstancedStaticMesh.generated.h"

class UStaticMesh;
class UMaterialInterface;
class UFoliageInstancedStaticMeshComponent;

UCLASS(EditInlineNew, MinimalAPI)
class UFoliageType_InstancedStaticMesh : public UFoliageType {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    UStaticMesh* Mesh;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    TArray<UMaterialInterface*> OverrideMaterials;
    
    UPROPERTY(EditAnywhere)
    TSubclassOf<UFoliageInstancedStaticMeshComponent> ComponentClass;
    
    UFoliageType_InstancedStaticMesh();
};

