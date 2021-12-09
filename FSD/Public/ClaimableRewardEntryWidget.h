#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "ClaimableRewardEntry.h"
#include "ClaimableRewardEntryWidget.generated.h"

class UClaimableRewardEntryWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FClaimableRewardEntryWidgetOnRewardClaimed, UClaimableRewardEntryWidget*, EntryWidget);

UCLASS(EditInlineNew)
class UClaimableRewardEntryWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FClaimableRewardEntryWidgetOnRewardClaimed OnRewardClaimed;
    
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FClaimableRewardEntry Data;
    
    UFUNCTION(BlueprintCallable)
    void SignalRewardClaimed();
    
public:
    UFUNCTION(BlueprintCallable)
    void SetData(FClaimableRewardEntry InData);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveDataChanged();
    
public:
    UClaimableRewardEntryWidget();
};
