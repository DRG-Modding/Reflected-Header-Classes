#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ModioPopupBase.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UModioPopupBase : public UUserWidget {
    GENERATED_BODY()
public:
    UModioPopupBase();
};

