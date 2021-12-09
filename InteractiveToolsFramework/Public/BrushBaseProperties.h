#pragma once
#include "CoreMinimal.h"
#include "InteractiveToolPropertySet.h"
#include "BrushBaseProperties.generated.h"

UCLASS(NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UBrushBaseProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BrushSize;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    bool bSpecifyRadius;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float BrushRadius;
    
    UPROPERTY(EditAnywhere)
    float BrushStrength;
    
    UPROPERTY(EditAnywhere)
    float BrushFalloffAmount;
    
    UPROPERTY()
    bool bShowStrength;
    
    UPROPERTY()
    bool bShowFalloff;
    
    UBrushBaseProperties();
};

