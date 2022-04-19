#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexID -FallbackName=VertexID
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=EdgeID -FallbackName=EdgeID
#include "MeshElementAttributeList.h"
#include "EdgeToCreate.generated.h"

USTRUCT(BlueprintType)
struct FEdgeToCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVertexID VertexID0;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVertexID VertexID1;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMeshElementAttributeList EdgeAttributes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FEdgeID OriginalEdgeID;
    
    EDITABLEMESH_API FEdgeToCreate();
};

