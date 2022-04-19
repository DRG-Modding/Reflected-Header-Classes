#pragma once
#include "CoreMinimal.h"
#include "MeshElementAttributeList.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=PolygonGroupID -FallbackName=PolygonGroupID
#include "PolygonGroupToCreate.generated.h"

USTRUCT(BlueprintType)
struct FPolygonGroupToCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMeshElementAttributeList PolygonGroupAttributes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FPolygonGroupID OriginalPolygonGroupID;
    
    EDITABLEMESH_API FPolygonGroupToCreate();
};

