#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription VertexInstanceID
#include "MeshElementAttributeList.h"
#include "AttributesForVertexInstance.generated.h"

USTRUCT(BlueprintType)
struct FAttributesForVertexInstance {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVertexInstanceID VertexInstanceID;
    
    UPROPERTY(BlueprintReadWrite)
    FMeshElementAttributeList VertexInstanceAttributes;
    
    EDITABLEMESH_API FAttributesForVertexInstance();
};

