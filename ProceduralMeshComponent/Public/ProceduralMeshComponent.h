#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine KConvexElem
//CROSS-MODULE INCLUDE: Engine MeshComponent
//CROSS-MODULE INCLUDE: CoreUObject BoxSphereBounds
//CROSS-MODULE INCLUDE: Engine Interface_CollisionDataProvider
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ProcMeshSection.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "ProcMeshTangent.h"
//CROSS-MODULE INCLUDE: CoreUObject Color
#include "ProceduralMeshComponent.generated.h"

class UBodySetup;

UCLASS()
class PROCEDURALMESHCOMPONENT_API UProceduralMeshComponent : public UMeshComponent, public IInterface_CollisionDataProvider {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseComplexAsSimpleCollision;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    bool bUseAsyncCooking;
    
    UPROPERTY(Instanced)
    UBodySetup* ProcMeshBodySetup;
    
private:
    UPROPERTY()
    TArray<FProcMeshSection> ProcMeshSections;
    
    UPROPERTY()
    TArray<FKConvexElem> CollisionConvexElems;
    
    UPROPERTY()
    FBoxSphereBounds LocalBounds;
    
    UPROPERTY(Transient)
    TArray<UBodySetup*> AsyncBodySetupQueue;
    
public:
    UFUNCTION(BlueprintCallable)
    void UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents);
    
    UFUNCTION(BlueprintCallable)
    void UpdateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents);
    
    UFUNCTION(BlueprintCallable)
    void SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsMeshSectionVisible(int32 SectionIndex) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    int32 GetNumSections() const;
    
    UFUNCTION(BlueprintCallable)
    void CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);
    
    UFUNCTION(BlueprintCallable)
    void CreateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision);
    
    UFUNCTION(BlueprintCallable)
    void ClearMeshSection(int32 SectionIndex);
    
    UFUNCTION(BlueprintCallable)
    void ClearCollisionConvexMeshes();
    
    UFUNCTION(BlueprintCallable)
    void ClearAllMeshSections();
    
    UFUNCTION(BlueprintCallable)
    void AddCollisionConvexMesh(TArray<FVector> ConvexVerts);
    
    UProceduralMeshComponent();
    
    // Fix for true pure virtual functions not being implemented
};

