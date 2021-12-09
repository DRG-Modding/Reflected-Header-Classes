#pragma once
#include "CoreMinimal.h"
#include "SubdividedQuadVertex.h"
#include "SubdividedQuad.generated.h"

USTRUCT(BlueprintType)
struct FSubdividedQuad {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite)
    FSubdividedQuadVertex QuadVertex0;
    
    UPROPERTY(BlueprintReadWrite)
    FSubdividedQuadVertex QuadVertex1;
    
    UPROPERTY(BlueprintReadWrite)
    FSubdividedQuadVertex QuadVertex2;
    
    UPROPERTY(BlueprintReadWrite)
    FSubdividedQuadVertex QuadVertex3;
    
    EDITABLEMESH_API FSubdividedQuad();
};

