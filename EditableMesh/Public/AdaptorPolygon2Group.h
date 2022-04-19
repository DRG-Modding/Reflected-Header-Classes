#pragma once
#include "CoreMinimal.h"
#include "AdaptorPolygon2Group.generated.h"

USTRUCT()
struct FAdaptorPolygon2Group {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    uint32 RenderingSectionIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 MaterialIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 MaxTriangles;
    
    EDITABLEMESH_API FAdaptorPolygon2Group();
};

