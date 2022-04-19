#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexID -FallbackName=VertexID
#include "MeshElementAttributeList.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=MeshDescription -ObjectName=VertexInstanceID -FallbackName=VertexInstanceID
#include "VertexInstanceToCreate.generated.h"

USTRUCT(BlueprintType)
struct FVertexInstanceToCreate {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVertexID VertexID;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FMeshElementAttributeList VertexInstanceAttributes;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVertexInstanceID OriginalVertexInstanceID;
    
    EDITABLEMESH_API FVertexInstanceToCreate();
};

