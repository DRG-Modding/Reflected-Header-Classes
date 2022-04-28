#pragma once
#include "CoreMinimal.h"
#include "Visual.h"
#include "PanelSlot.generated.h"

class UWidget;
class UPanelWidget;

UCLASS(Blueprintable)
class UMG_API UPanelSlot : public UVisual {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UPanelWidget* Parent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UWidget* Content;
    
    UPanelSlot();
};

