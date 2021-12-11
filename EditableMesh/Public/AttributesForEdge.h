#pragma once
#include "CoreMinimal.h"
#include "MeshElementAttributeList.h"
//CROSS-MODULE INCLUDE: MeshDescription EdgeID
#include "AttributesForEdge.generated.h"

USTRUCT(BlueprintType)
struct FAttributesForEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FEdgeID EdgeID;
    
    UPROPERTY(BlueprintReadWrite)
    FMeshElementAttributeList EdgeAttributes;
    
    EDITABLEMESH_API FAttributesForEdge();
};

