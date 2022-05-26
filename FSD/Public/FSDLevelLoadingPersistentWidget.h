#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "FSDLevelLoadingPersistentWidget.generated.h"

class UTexture;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UFSDLevelLoadingPersistentWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UFSDLevelLoadingPersistentWidget();
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void SetFadeProgress(float Fade, bool ToSpaceRig, UTexture* LoadingImage);
    
};

