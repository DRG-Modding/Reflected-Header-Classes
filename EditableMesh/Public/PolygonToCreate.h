#pragma once
#include "CoreMinimal.h"
#include "VertexAndAttributes.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonGroupID -FallbackName=PolygonGroupID
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonID -FallbackName=PolygonID
#include "EPolygonEdgeHardness.h"
#include "PolygonToCreate.generated.h"

USTRUCT(BlueprintType)
struct FPolygonToCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPolygonGroupID PolygonGroupID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    TArray<FVertexAndAttributes> PerimeterVertices;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPolygonID OriginalPolygonID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    EPolygonEdgeHardness PolygonEdgeHardness;
    
    EDITABLEMESH_API FPolygonToCreate();
};

