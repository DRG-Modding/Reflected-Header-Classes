#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "ClaimableRewardView.h"
#include "ClaimableRewardViewWidget.generated.h"

UCLASS(EditInlineNew)
class UClaimableRewardViewWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly)
    FClaimableRewardView Data;
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveEndFlow();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDataChanged();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveBeginFlow();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndRewardFlow();
    
    UFUNCTION(BlueprintCallable)
    void BeginRewardFlow(FClaimableRewardView InViewData);
    
    UClaimableRewardViewWidget();
};
