#pragma once
#include "CoreMinimal.h"
#include "InteractiveGizmo.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=LinearColor -FallbackName=LinearColor
#include "BrushStampIndicator.generated.h"

class UPrimitiveComponent;

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UBrushStampIndicator : public UInteractiveGizmo {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float BrushRadius;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float BrushFalloff;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector BrushPosition;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FVector BrushNormal;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bDrawIndicatorLines;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bDrawRadiusCircle;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    int32 SampleStepCount;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLinearColor LineColor;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float LineThickness;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bDepthTested;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    bool bDrawSecondaryLines;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    float SecondaryLineThickness;
    
    UPROPERTY(BlueprintReadWrite, meta=(AllowPrivateAccess=true))
    FLinearColor SecondaryLineColor;
    
    UPROPERTY(BlueprintReadWrite, Export, meta=(AllowPrivateAccess=true))
    UPrimitiveComponent* AttachedComponent;
    
    UBrushStampIndicator();
};

