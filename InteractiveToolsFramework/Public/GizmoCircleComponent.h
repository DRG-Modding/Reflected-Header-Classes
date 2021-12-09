#pragma once
#include "CoreMinimal.h"
#include "GizmoBaseComponent.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "GizmoCircleComponent.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoCircleComponent : public UGizmoBaseComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FVector Normal;
    
    UPROPERTY(EditAnywhere)
    float Radius;
    
    UPROPERTY(EditAnywhere)
    float Thickness;
    
    UPROPERTY(EditAnywhere)
    int32 NumSides;
    
    UPROPERTY(EditAnywhere)
    bool bViewAligned;
    
    UPROPERTY(EditAnywhere)
    bool bOnlyAllowFrontFacingHits;
    
    UGizmoCircleComponent();
};

