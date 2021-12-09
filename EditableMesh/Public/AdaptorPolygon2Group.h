#pragma once
#include "CoreMinimal.h"
#include "AdaptorPolygon2Group.generated.h"

USTRUCT()
struct FAdaptorPolygon2Group {
    GENERATED_BODY()
public:
    UPROPERTY()
    uint32 RenderingSectionIndex;
    
    UPROPERTY()
    int32 MaterialIndex;
    
    UPROPERTY()
    int32 MaxTriangles;
    
    EDITABLEMESH_API FAdaptorPolygon2Group();
};

