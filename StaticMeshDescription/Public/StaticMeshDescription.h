#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: MeshDescription MeshDescriptionBase
//CROSS-MODULE INCLUDE: MeshDescription PolygonID
//CROSS-MODULE INCLUDE: MeshDescription PolygonGroupID
//CROSS-MODULE INCLUDE: MeshDescription VertexInstanceID
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "StaticMeshDescription.generated.h"

UCLASS()
class STATICMESHDESCRIPTION_API UStaticMeshDescription : public UMeshDescriptionBase {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    void SetVertexInstanceUV(FVertexInstanceID VertexInstanceID, FVector2D UV, int32 UVIndex);
    
    UFUNCTION(BlueprintCallable)
    void SetPolygonGroupMaterialSlotName(FPolygonGroupID PolygonGroupID, const FName& slotName);
    
    UFUNCTION(BlueprintPure)
    FVector2D GetVertexInstanceUV(FVertexInstanceID VertexInstanceID, int32 UVIndex) const;
    
    UFUNCTION(BlueprintCallable)
    void CreateCube(FVector Center, FVector HalfExtents, FPolygonGroupID PolygonGroup, FPolygonID& PolygonID_PlusX, FPolygonID& PolygonID_MinusX, FPolygonID& PolygonID_PlusY, FPolygonID& PolygonID_MinusY, FPolygonID& PolygonID_PlusZ, FPolygonID& PolygonID_MinusZ);
    
    UStaticMeshDescription();
};

