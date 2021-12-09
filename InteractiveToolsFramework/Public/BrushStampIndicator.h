#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "InteractiveGizmo.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "BrushStampIndicator.generated.h"

class UPrimitiveComponent;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UBrushStampIndicator : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY()
    float BrushRadius;
    
    UPROPERTY()
    float BrushFalloff;
    
    UPROPERTY()
    FVector BrushPosition;
    
    UPROPERTY()
    FVector BrushNormal;
    
    UPROPERTY()
    bool bDrawIndicatorLines;
    
    UPROPERTY()
    bool bDrawRadiusCircle;
    
    UPROPERTY()
    bool bDrawFalloffCircle;
    
    UPROPERTY()
    int32 SampleStepCount;
    
    UPROPERTY()
    FLinearColor LineColor;
    
    UPROPERTY()
    float LineThickness;
    
    UPROPERTY()
    bool bDepthTested;
    
    UPROPERTY()
    bool bDrawSecondaryLines;
    
    UPROPERTY()
    float SecondaryLineThickness;
    
    UPROPERTY()
    FLinearColor SecondaryLineColor;
    
    UPROPERTY(Export)
    UPrimitiveComponent* AttachedComponent;
    
    UBrushStampIndicator();
};

