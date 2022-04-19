#pragma once
#include "CoreMinimal.h"
#include "Visual.h"
#include "PanelSlot.generated.h"

class UPanelWidget;
class UWidget;

UCLASS()
class UMG_API UPanelSlot : public UVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Parent;
    
    UPROPERTY(BlueprintReadWrite, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Content;
    
    UPanelSlot();
};

