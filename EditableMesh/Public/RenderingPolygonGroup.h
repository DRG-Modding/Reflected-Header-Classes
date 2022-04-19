#pragma once
#include "CoreMinimal.h"
#include "RenderingPolygonGroup.generated.h"

USTRUCT()
struct FRenderingPolygonGroup {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 RenderingSectionIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 MaxTriangles;
    
    EDITABLEMESH_API FRenderingPolygonGroup();
};

