#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "RewardWidget.generated.h"

class UReward;

UCLASS(Blueprintable, EditInlineNew)
class URewardWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    UReward* Reward;
    
public:
    URewardWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void PlayReceiveAnim();
    
};

