#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "VisibilityChangedDelegateDelegate.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=ESlateVisibility -FallbackName=ESlateVisibility
#include "FSDUserWidget.generated.h"

class AItem;
class AFSDPlayerState;
class APlayerCharacter;

UCLASS(Blueprintable, EditInlineNew)
class FSD_API UFSDUserWidget : public UUserWidget {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable, BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FVisibilityChangedDelegate OnVisibilityChangedFSD;
    
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Transient, meta=(AllowPrivateAccess=true))
    APlayerCharacter* Character;
    
public:
    UFSDUserWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void SetOpacity(float alpha);
    
public:
    UFUNCTION(BlueprintCallable)
    void ScaleByBaseResolution();
    
protected:
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveNewVisibility(ESlateVisibility NewVisibility);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseMenuReleased(bool& Handled);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnCloseMenuPressed(bool& Handled);
    
    UFUNCTION(BlueprintCallable)
    bool HasCharacter();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetOpacity() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AFSDPlayerState* GetFSDPlayerState();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AItem* GetEquippedItem() const;
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetBaseResolutionScale() const;
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void BP_OnRefresh();
    
};

