#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "SoundClassWidget.generated.h"

UCLASS(Abstract, EditInlineNew)
class USoundClassWidget : public UUserWidget {
    GENERATED_BODY()
public:
    USoundClassWidget();
};

