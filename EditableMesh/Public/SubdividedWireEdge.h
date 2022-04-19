#pragma once
#include "CoreMinimal.h"
#include "SubdividedWireEdge.generated.h"

USTRUCT(BlueprintType)
struct FSubdividedWireEdge {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 EdgeVertex0PositionIndex;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 EdgeVertex1PositionIndex;
    
    EDITABLEMESH_API FSubdividedWireEdge();
};

