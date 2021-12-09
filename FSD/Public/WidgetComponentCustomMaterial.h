#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG WidgetComponent
#include "WidgetComponentCustomMaterial.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew)
class UWidgetComponentCustomMaterial : public UWidgetComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(EditAnywhere)
    UMaterialInterface* CustomMaterial;
    
public:
    UWidgetComponentCustomMaterial();
};

