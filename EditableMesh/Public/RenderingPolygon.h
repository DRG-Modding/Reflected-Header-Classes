#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription PolygonGroupID
//CROSS-MODULE INCLUDE: MeshDescription TriangleID
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

