#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "BossFightWidget.generated.h"

class UBossFightInterface;
class IBossFightInterface;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UBossFightWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TScriptInterface<IBossFightInterface> BossFight;
    
    UBossFightWidget();
};

