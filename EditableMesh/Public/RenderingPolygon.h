#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription TriangleID
//CROSS-MODULE INCLUDE: MeshDescription PolygonGroupID
#include "RenderingPolygon.generated.h"

USTRUCT()
struct FRenderingPolygon {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPolygonGroupID PolygonGroupID;
    
    UPROPERTY()
    TArray<FTriangleID> TriangulatedPolygonTriangleIndices;
    
    EDITABLEMESH_API FRenderingPolygon();
};

