#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ProcMeshTangent.generated.h"

USTRUCT(BlueprintType)
struct FProcMeshTangent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FVector TangentX;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bFlipTangentY;
    
    PROCEDURALMESHCOMPONENT_API FProcMeshTangent();
};

