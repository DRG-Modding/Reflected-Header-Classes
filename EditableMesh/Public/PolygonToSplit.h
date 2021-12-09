#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription PolygonID
#include "VertexPair.h"
#include "PolygonToSplit.generated.h"

USTRUCT(BlueprintType)
struct FPolygonToSplit {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FPolygonID PolygonID;
    
    UPROPERTY(BlueprintReadWrite)
    TArray<FVertexPair> VertexPairsToSplitAt;
    
    EDITABLEMESH_API FPolygonToSplit();
};

