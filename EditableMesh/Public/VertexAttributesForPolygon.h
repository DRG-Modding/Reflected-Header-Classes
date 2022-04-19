#pragma once
#include "CoreMinimal.h"
#include "VertexAttributesForPolygonHole.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonID -FallbackName=PolygonID
#include "MeshElementAttributeList.h"
#include "VertexAttributesForPolygon.generated.h"

USTRUCT(BlueprintType)
struct FVertexAttributesForPolygon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPolygonID PolygonID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole;
    
    EDITABLEMESH_API FVertexAttributesForPolygon();
};

