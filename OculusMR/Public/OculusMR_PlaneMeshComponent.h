#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine MeshComponent
#include "OculusMR_PlaneMeshTriangle.h"
#include "OculusMR_PlaneMeshComponent.generated.h"

UCLASS(EditInlineNew, NotPlaceable)
class UOculusMR_PlaneMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    bool SetCustomMeshTriangles(const TArray<FOculusMR_PlaneMeshTriangle>& Triangles);
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomMeshTriangles();
    
    UFUNCTION(BlueprintCallable)
    void AddCustomMeshTriangles(const TArray<FOculusMR_PlaneMeshTriangle>& Triangles);
    
    UOculusMR_PlaneMeshComponent();
};

