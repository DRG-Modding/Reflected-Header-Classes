#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "ClaimableRewardView.h"
#include "ClaimableRewardViewWidget.generated.h"

UCLASS(Blueprintable, EditInlineNew)
class UClaimableRewardViewWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FClaimableRewardView Data;
    
public:
    UClaimableRewardViewWidget();
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveEndFlow();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveDataChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveBeginFlow();
    
public:
    UFUNCTION(BlueprintCallable)
    void EndRewardFlow();
    
    UFUNCTION(BlueprintCallable)
    void BeginRewardFlow(FClaimableRewardView InViewData);
    
};

