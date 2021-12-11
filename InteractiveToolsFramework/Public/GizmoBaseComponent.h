#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine PrimitiveComponent
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "GizmoBaseComponent.generated.h"

UCLASS()
class INTERACTIVETOOLSFRAMEWORK_API UGizmoBaseComponent : public UPrimitiveComponent {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    FLinearColor Color;
    
    UPROPERTY(EditAnywhere)
    float HoverSizeMultiplier;
    
    UPROPERTY(EditAnywhere)
    float PixelHitDistanceThreshold;
    
    UFUNCTION(BlueprintCallable)
    void UpdateWorldLocalState(bool bWorldIn);
    
    UFUNCTION(BlueprintCallable)
    void UpdateHoverState(bool bHoveringIn);
    
    UGizmoBaseComponent();
};

