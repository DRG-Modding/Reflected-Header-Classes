#pragma once
#include "CoreMinimal.h"
#include "MeshElementAttributeList.h"
//CROSS-MODULE INCLUDE: MeshDescription VertexID
#include "VertexToCreate.generated.h"

USTRUCT(BlueprintType)
struct FVertexToCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FMeshElementAttributeList VertexAttributes;
    
    UPROPERTY()
    FVertexID OriginalVertexID;
    
    EDITABLEMESH_API FVertexToCreate();
};

