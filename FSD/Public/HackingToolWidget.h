#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "HackingToolWidget.generated.h"

class USoundCue;
class UDialogDataAsset;
class UHackingUsableComponent;
class AHackingToolItem;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FHackingToolWidgetOnRequestUnequipHackingTool);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHackingToolWidgetOnHackingFail, USoundCue*, InFailCue, UDialogDataAsset*, InShout);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FHackingToolWidgetOnHackingStageCompleted, int32, InNextStage, int32, InTotalStages);
UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_OneParam(FHackingToolWidgetOnHackingCompleted, bool, InSuccess);

UCLASS(Abstract, EditInlineNew)
class FSD_API UHackingToolWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FHackingToolWidgetOnHackingFail OnHackingFail;
    
    UPROPERTY(BlueprintAssignable)
    FHackingToolWidgetOnHackingStageCompleted OnHackingStageCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FHackingToolWidgetOnHackingCompleted OnHackingCompleted;
    
    UPROPERTY(BlueprintAssignable)
    FHackingToolWidgetOnRequestUnequipHackingTool OnRequestUnequipHackingTool;
    
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<UHackingUsableComponent> HackingUsable;
    
    UPROPERTY(BlueprintReadOnly, Transient)
    TWeakObjectPtr<AHackingToolItem> HackingTool;
    
public:
    UFUNCTION(BlueprintCallable)
    void StartHacking(UHackingUsableComponent* InHackingUsable, AHackingToolItem* InHackingTool);
    
protected:
    UFUNCTION(BlueprintCallable)
    void RequestUnequipHackingTool();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveHackingToolUnequipped();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveHackingStarted();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveClick();
    
    UFUNCTION(BlueprintCallable)
    void HackingStageComplete(int32 InNextStage, int32 InTotalStages);
    
    UFUNCTION(BlueprintCallable)
    void HackingComplete(bool InSuccess);
    
public:
    UHackingToolWidget();
};

