#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription EdgeID
#include "MeshElementAttributeList.h"
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

