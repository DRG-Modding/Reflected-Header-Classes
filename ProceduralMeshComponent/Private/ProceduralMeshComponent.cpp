#include "ProceduralMeshComponent.h"

void UProceduralMeshComponent::UpdateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents) {
}

void UProceduralMeshComponent::UpdateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents) {
}

void UProceduralMeshComponent::SetMeshSectionVisible(int32 SectionIndex, bool bNewVisibility) {
}

bool UProceduralMeshComponent::IsMeshSectionVisible(int32 SectionIndex) const {
    return false;
}

int32 UProceduralMeshComponent::GetNumSections() const {
    return 0;
}

void UProceduralMeshComponent::CreateMeshSection_LinearColor(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FVector2D>& UV1, const TArray<FVector2D>& UV2, const TArray<FVector2D>& UV3, const TArray<FLinearColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision) {
}

void UProceduralMeshComponent::CreateMeshSection(int32 SectionIndex, const TArray<FVector>& Vertices, const TArray<int32>& Triangles, const TArray<FVector>& Normals, const TArray<FVector2D>& UV0, const TArray<FColor>& VertexColors, const TArray<FProcMeshTangent>& Tangents, bool bCreateCollision) {
}

void UProceduralMeshComponent::ClearMeshSection(int32 SectionIndex) {
}

void UProceduralMeshComponent::ClearCollisionConvexMeshes() {
}

void UProceduralMeshComponent::ClearAllMeshSections() {
}

void UProceduralMeshComponent::AddCollisionConvexMesh(TArray<FVector> ConvexVerts) {
}

UProceduralMeshComponent::UProceduralMeshComponent() {
    this->bUseComplexAsSimpleCollision = true;
    this->bUseAsyncCooking = false;
    this->ProcMeshBodySetup = NULL;
}

