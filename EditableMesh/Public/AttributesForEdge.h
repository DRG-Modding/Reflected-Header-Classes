#pragma once
#include "CoreMinimal.h"
#include "MeshElementAttributeList.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=EdgeID -FallbackName=EdgeID
#include "AttributesForEdge.generated.h"

USTRUCT(BlueprintType)
struct FAttributesForEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEdgeID EdgeID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMeshElementAttributeList EdgeAttributes;
    
    EDITABLEMESH_API FAttributesForEdge();
};

