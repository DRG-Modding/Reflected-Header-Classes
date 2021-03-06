#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "DeepProceduralMeshComponent.generated.h"

class UBodySetup;
class UTerrainMaterialCore;
class UPhysicalMaterial;

UCLASS(Blueprintable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class FSDENGINE_API UDeepProceduralMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, DuplicateTransient, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    UBodySetup* ProcMeshBodySetup;
    
    UDeepProceduralMeshComponent();
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UTerrainMaterialCore* FindTerrainMaterialFromPhysicalMaterial(UPhysicalMaterial* Material) const;
    
};

