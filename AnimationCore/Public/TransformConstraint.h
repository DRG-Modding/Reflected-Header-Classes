#pragma once
#include "CoreMinimal.h"
#include "ConstraintDescription.h"
#include "TransformConstraint.generated.h"

USTRUCT(BlueprintType)
struct ANIMATIONCORE_API FTransformConstraint {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FConstraintDescription Operator;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName SourceNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FName TargetNode;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float Weight;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bMaintainOffset;
    
    FTransformConstraint();
};

