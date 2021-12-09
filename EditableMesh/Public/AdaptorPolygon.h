#pragma once
#include "CoreMinimal.h"
#include "AdaptorTriangleID.h"
//CROSS-MODULE INCLUDE: MeshDescription PolygonGroupID
#include "AdaptorPolygon.generated.h"

USTRUCT()
struct FAdaptorPolygon {
    GENERATED_BODY()
public:
    UPROPERTY()
    FPolygonGroupID PolygonGroupID;
    
    UPROPERTY()
    TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices;
    
    EDITABLEMESH_API FAdaptorPolygon();
};

