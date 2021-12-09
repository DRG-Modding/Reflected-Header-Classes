#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "SeasonEditorRewardWidget.generated.h"

class UReward;

UCLASS(EditInlineNew)
class FSD_API USeasonEditorRewardWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Instanced)
    UReward* Reward;
    
public:
    USeasonEditorRewardWidget();
};

