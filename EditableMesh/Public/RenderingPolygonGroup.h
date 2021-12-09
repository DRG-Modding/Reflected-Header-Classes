#pragma once
#include "CoreMinimal.h"
#include "RenderingPolygonGroup.generated.h"

USTRUCT()
struct FRenderingPolygonGroup {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 RenderingSectionIndex;
    
    UPROPERTY()
    int32 MaterialIndex;
    
    UPROPERTY()
    int32 MaxTriangles;
    
    EDITABLEMESH_API FRenderingPolygonGroup();
};

