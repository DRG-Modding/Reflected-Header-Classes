#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine MeshComponent
#include "EOculusMR_BoundaryType.h"
#include "OculusMR_BoundaryMeshComponent.generated.h"

class UMaterial;
class AOculusMR_CastingCameraActor;

UCLASS(EditInlineNew, NotPlaceable)
class UOculusMR_BoundaryMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EOculusMR_BoundaryType BoundaryType;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float BottomZ;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float TopZ;
    
    UPROPERTY()
    UMaterial* WhiteMaterial;
    
    UPROPERTY()
    AOculusMR_CastingCameraActor* CastingCameraActor;
    
    UOculusMR_BoundaryMeshComponent();
};

