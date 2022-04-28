#pragma once
#include "CoreMinimal.h"
#include "InteractiveToolPropertySet.h"
#include "BrushBaseProperties.generated.h"

UCLASS(Blueprintable, NonTransient)
class INTERACTIVETOOLSFRAMEWORK_API UBrushBaseProperties : public UInteractiveToolPropertySet {
    GENERATED_BODY()
public:
    UPROPERTY(EditAnywhere)
    float BrushSize;
    
    UPROPERTY(AdvancedDisplay, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bSpecifyRadius;
    
    UPROPERTY(AdvancedDisplay, EditAnywhere)
    float BrushRadius;
    
    UPROPERTY(EditAnywhere)
    float BrushStrength;
    
    UPROPERTY(EditAnywhere)
    float BrushFalloffAmount;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowStrength;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bShowFalloff;
    
    UBrushBaseProperties();
};

