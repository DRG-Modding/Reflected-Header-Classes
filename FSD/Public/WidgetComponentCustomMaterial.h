#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=WidgetComponent -FallbackName=WidgetComponent
#include "WidgetComponentCustomMaterial.generated.h"

class UMaterialInterface;

UCLASS(EditInlineNew, meta=(BlueprintSpawnableComponent))
class UWidgetComponentCustomMaterial : public UWidgetComponent {
    GENERATED_BODY()
public:
private:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UMaterialInterface* CustomMaterial;
    
public:
    UWidgetComponentCustomMaterial();
};

