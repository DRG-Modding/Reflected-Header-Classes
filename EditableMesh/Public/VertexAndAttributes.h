#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription VertexInstanceID
//CROSS-MODULE INCLUDE: MeshDescription VertexID
#include "MeshElementAttributeList.h"
#include "VertexAndAttributes.generated.h"

USTRUCT(BlueprintType)
struct FVertexAndAttributes {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVertexInstanceID VertexInstanceID;
    
    UPROPERTY(BlueprintReadWrite)
    FVertexID VertexID;
    
    UPROPERTY(BlueprintReadWrite)
    FMeshElementAttributeList PolygonVertexAttributes;
    
    EDITABLEMESH_API FVertexAndAttributes();
};

