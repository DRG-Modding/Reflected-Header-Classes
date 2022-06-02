#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=Engine -ObjectName=MeshComponent -FallbackName=MeshComponent
#include "OculusMR_PlaneMeshTriangle.h"
#include "OculusMR_PlaneMeshComponent.generated.h"

UCLASS(Blueprintable, EditInlineNew, NotPlaceable, ClassGroup=Custom, meta=(BlueprintSpawnableComponent))
class UOculusMR_PlaneMeshComponent : public UMeshComponent {
    GENERATED_BODY()
public:
    UOculusMR_PlaneMeshComponent();
    UFUNCTION(BlueprintCallable)
    bool SetCustomMeshTriangles(const TArray<FOculusMR_PlaneMeshTriangle>& Triangles);
    
    UFUNCTION(BlueprintCallable)
    void ClearCustomMeshTriangles();
    
    UFUNCTION(BlueprintCallable)
    void AddCustomMeshTriangles(const TArray<FOculusMR_PlaneMeshTriangle>& Triangles);
    
};

