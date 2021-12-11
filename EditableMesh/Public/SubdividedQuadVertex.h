#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject Color
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "SubdividedQuadVertex.generated.h"

USTRUCT(BlueprintType)
struct FSubdividedQuadVertex {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    int32 VertexPositionIndex;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D TextureCoordinate0;
    
    UPROPERTY(BlueprintReadWrite)
    FVector2D TextureCoordinate1;
    
    UPROPERTY(BlueprintReadWrite)
    FColor VertexColor;
    
    UPROPERTY(BlueprintReadWrite)
    FVector VertexNormal;
    
    UPROPERTY(BlueprintReadWrite)
    FVector VertexTangent;
    
    UPROPERTY(BlueprintReadWrite)
    float VertexBinormalSign;
    
    EDITABLEMESH_API FSubdividedQuadVertex();
};

