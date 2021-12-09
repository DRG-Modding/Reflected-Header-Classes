#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription PolygonID
#include "MeshElementAttributeList.h"
#include "VertexAttributesForPolygonHole.h"
#include "VertexAttributesForPolygon.generated.h"

USTRUCT(BlueprintType)
struct FVertexAttributesForPolygon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPolygonID PolygonID;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole;
    
    EDITABLEMESH_API FVertexAttributesForPolygon();
};

