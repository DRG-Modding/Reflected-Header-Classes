#pragma once
#include "CoreMinimal.h"
#include "MeshElementAttributeList.h"
//CROSS-MODULE INCLUDE: MeshDescription PolygonGroupID
#include "PolygonGroupToCreate.generated.h"

USTRUCT(BlueprintType)
struct FPolygonGroupToCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FMeshElementAttributeList PolygonGroupAttributes;
    
    UPROPERTY(BlueprintReadWrite)
    FPolygonGroupID OriginalPolygonGroupID;
    
    EDITABLEMESH_API FPolygonGroupToCreate();
};

