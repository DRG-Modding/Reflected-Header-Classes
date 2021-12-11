#pragma once
#include "CoreMinimal.h"
#include "ETransformConstraintType.h"
#include "ConstraintDescriptionEx.h"
#include "TransformConstraintDescription.generated.h"

USTRUCT()
struct ANIMATIONCORE_API FTransformConstraintDescription : public FConstraintDescriptionEx {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETransformConstraintType TransformType;
    
    FTransformConstraintDescription();
};

