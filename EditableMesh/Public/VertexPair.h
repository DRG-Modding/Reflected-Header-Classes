#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription VertexID
#include "VertexPair.generated.h"

USTRUCT(BlueprintType)
struct FVertexPair {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVertexID VertexID0;
    
    UPROPERTY(BlueprintReadWrite)
    FVertexID VertexID1;
    
    EDITABLEMESH_API FVertexPair();
};

