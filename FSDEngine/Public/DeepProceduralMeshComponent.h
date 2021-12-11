#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine MeshComponent
#include "DeepProceduralMeshComponent.generated.h"

class UBodySetup;
class UPhysicalMaterial;
class UTerrainMaterialCore;

UCLASS()
class FSDENGINE_API UDeepProceduralMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(DuplicateTransient, Transient)
    UBodySetup* ProcMeshBodySetup;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTerrainMaterialCore* FindTerrainMaterialFromPhysicalMaterial(UPhysicalMaterial* Material) const;
    
    UDeepProceduralMeshComponent();
};

