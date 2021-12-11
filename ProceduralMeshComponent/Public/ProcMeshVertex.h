#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ProcMeshTangent.h"
//CROSS-MODULE INCLUDE: CoreUObject Color
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
#include "ProcMeshVertex.generated.h"

USTRUCT(BlueprintType)
struct FProcMeshVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Position;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector Normal;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FProcMeshTangent Tangent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FColor Color;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UV0;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UV1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UV2;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector2D UV3;
    
    PROCEDURALMESHCOMPONENT_API FProcMeshVertex();
};

