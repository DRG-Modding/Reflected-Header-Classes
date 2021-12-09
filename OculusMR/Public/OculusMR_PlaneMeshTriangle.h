#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "OculusMR_PlaneMeshTriangle.generated.h"

USTRUCT(BlueprintType)
struct FOculusMR_PlaneMeshTriangle {
    GENERATED_BODY()
public:
    UPROPERTY()
    FVector Vertex0;
    
    UPROPERTY()
    FVector2D UV0;
    
    UPROPERTY()
    FVector Vertex1;
    
    UPROPERTY()
    FVector2D UV1;
    
    UPROPERTY()
    FVector Vertex2;
    
    UPROPERTY()
    FVector2D UV2;
    
    OCULUSMR_API FOculusMR_PlaneMeshTriangle();
};

