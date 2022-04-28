#pragma once
#include "CoreMinimal.h"
#include "AdaptorTriangleID.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonGroupID -FallbackName=PolygonGroupID
#include "AdaptorPolygon.generated.h"

USTRUCT(BlueprintType)
struct FAdaptorPolygon {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FPolygonGroupID PolygonGroupID;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TArray<FAdaptorTriangleID> TriangulatedPolygonTriangleIndices;
    
    EDITABLEMESH_API FAdaptorPolygon();
};

