#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription ElementID
#include "AdaptorTriangleID.generated.h"

USTRUCT(BlueprintType)
struct FAdaptorTriangleID : public FElementID {
    GENERATED_BODY()
public:
    EDITABLEMESH_API FAdaptorTriangleID();
};

