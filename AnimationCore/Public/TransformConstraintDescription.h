#pragma once
#include "CoreMinimal.h"
#include "ConstraintDescriptionEx.h"
#include "ETransformConstraintType.h"
#include "TransformConstraintDescription.generated.h"

USTRUCT()
struct ANIMATIONCORE_API FTransformConstraintDescription : public FConstraintDescriptionEx {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    ETransformConstraintType TransformType;
    
    FTransformConstraintDescription();
};

