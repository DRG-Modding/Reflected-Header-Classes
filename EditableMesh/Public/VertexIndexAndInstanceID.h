#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription VertexInstanceID
#include "VertexIndexAndInstanceID.generated.h"

USTRUCT(BlueprintType)
struct FVertexIndexAndInstanceID {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 ContourIndex;
    
    UPROPERTY(BlueprintReadWrite)
    FVertexInstanceID VertexInstanceID;
    
    EDITABLEMESH_API FVertexIndexAndInstanceID();
};

