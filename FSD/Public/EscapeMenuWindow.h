#pragma once
#include "CoreMinimal.h"
#include "EMinersManualSection.h"
#include "WindowWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Guid -FallbackName=Guid
#include "EscapeMenuWindow.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UEscapeMenuWindow : public UWindowWidget {
    GENERATED_BODY()
public:
    UEscapeMenuWindow();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OpenMinersManualFromID(EMinersManualSection Section, const FGuid& ID);
    
};

