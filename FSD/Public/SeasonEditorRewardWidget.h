#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "SeasonEditorRewardWidget.generated.h"

class UReward;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API USeasonEditorRewardWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced, meta=(AllowPrivateAccess=true))
    UReward* Reward;
    
public:
    USeasonEditorRewardWidget();
};

