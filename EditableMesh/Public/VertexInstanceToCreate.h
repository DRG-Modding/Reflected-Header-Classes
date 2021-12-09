#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription VertexID
#include "MeshElementAttributeList.h"
//CROSS-MODULE INCLUDE: MeshDescription VertexInstanceID
#include "VertexInstanceToCreate.generated.h"

USTRUCT(BlueprintType)
struct FVertexInstanceToCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVertexID VertexID;
    
    UPROPERTY(BlueprintReadWrite)
    FMeshElementAttributeList VertexInstanceAttributes;
    
    UPROPERTY()
    FVertexInstanceID OriginalVertexInstanceID;
    
    EDITABLEMESH_API FVertexInstanceToCreate();
};

