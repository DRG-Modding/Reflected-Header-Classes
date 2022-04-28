#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "FSDMainHUDWidget.generated.h"

class URadarPointComponent;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFSDMainHUDWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFSDMainHUDWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnRadarPointAdded(URadarPointComponent* Point);
    
public:
    UFUNCTION(BlueprintCallable)
    void AddRadarPoint(URadarPointComponent* Point);
    
};

