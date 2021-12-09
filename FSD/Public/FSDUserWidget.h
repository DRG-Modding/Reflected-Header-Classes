#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
//CROSS-MODULE INCLUDE: UMG ESlateVisibility
#include "FSDUserWidget.generated.h"

class AItem;
class APlayerCharacter;
class AFSDPlayerState;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FFSDUserWidgetOnVisibilityChanged, UUserWidget*, Widget, bool, IsVisible);

UCLASS(EditInlineNew)
class UFSDUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FFSDUserWidgetOnVisibilityChanged OnVisibilityChanged;
    
protected:
    UPROPERTY(BlueprintReadOnly, Transient)
    APlayerCharacter* Character;
    
    UFUNCTION(BlueprintCallable)
    void SetOpacity(float alpha);
    
public:
    UFUNCTION(BlueprintCallable)
    void ScaleByBaseResolution();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveNewVisibility(ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCloseMenuReleased(bool& Handled);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnCloseMenuPressed(bool& Handled);
    
    UFUNCTION(BlueprintCallable)
    bool HasCharacter();
    
    UFUNCTION(BlueprintPure)
    float GetOpacity() const;
    
    UFUNCTION(BlueprintPure)
    AFSDPlayerState* GetFSDPlayerState();
    
    UFUNCTION(BlueprintPure)
    AItem* GetEquippedItem() const;
    
public:
    UFUNCTION(BlueprintPure)
    float GetBaseResolutionScale() const;
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void BP_OnRefresh();
    
public:
    UFSDUserWidget();
};

