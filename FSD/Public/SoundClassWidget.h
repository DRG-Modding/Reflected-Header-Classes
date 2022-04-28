#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "SoundClassWidget.generated.h"

UCLASS(Abstract, Blueprintable, EditInlineNew)
class USoundClassWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USoundClassWidget();
};

