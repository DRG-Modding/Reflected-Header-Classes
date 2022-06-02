#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "WindowWidget.h"
#include "EMinersManualSection.h"
#include "EscapeMenuWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEscapeMenuWindow : public UWindowWidget {
    GENERATED_BODY()
public:
    UEscapeMenuWindow();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMinersManualFromID(EMinersManualSection Section, const FGuid& ID);
    
};

