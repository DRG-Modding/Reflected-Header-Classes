#pragma once
#include "CoreMinimal.h"
#include "ConstraintDescriptionEx.h"
#include "Axis.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "AimConstraintDescription.generated.h"

USTRUCT()
struct ANIMATIONCORE_API FAimConstraintDescription : public FConstraintDescriptionEx {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FAxis LookAt_Axis;
    
    UPROPERTY(EditAnywhere)
    FAxis LookUp_Axis;
    
    UPROPERTY(EditAnywhere)
    bool bUseLookUp;
    
    UPROPERTY(EditAnywhere)
    FVector LookUpTarget;
    
    FAimConstraintDescription();
};

