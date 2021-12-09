#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: MeshDescription VertexID
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "VertexToMove.generated.h"

USTRUCT(BlueprintType)
struct FVertexToMove {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FVertexID VertexID;
    
    UPROPERTY(BlueprintReadWrite)
    FVector NewVertexPosition;
    
    EDITABLEMESH_API FVertexToMove();
};

