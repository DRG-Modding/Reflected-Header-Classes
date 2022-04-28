#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonID -FallbackName=PolygonID
#include "VertexAttributesForPolygonHole.h"
#include "MeshElementAttributeList.h"
#include "VertexAttributesForPolygon.generated.h"

USTRUCT(BlueprintType)
struct FVertexAttributesForPolygon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolygonID PolygonID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FMeshElementAttributeList> PerimeterVertexAttributeLists;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FVertexAttributesForPolygonHole> VertexAttributeListsForEachHole;
    
    EDITABLEMESH_API FVertexAttributesForPolygon();
};

