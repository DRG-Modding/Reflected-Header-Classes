#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: SlateCore TextBlockStyle
#include "InputDisplay.h"
#include "EFSDInputSource.h"
#include "RichTextInputWidget.generated.h"

class UTextBlock;
class URichTextBlock;

UCLASS(Abstract, EditInlineNew, HideDropdown)
class URichTextInputWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FName InputName;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    TMap<FName, FString> MetaData;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText Content;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    EFSDInputSource InputSource;
    
    UPROPERTY(BlueprintReadOnly, Export)
    URichTextBlock* RichTextBlock;
    
    UFUNCTION(BlueprintCallable)
    void ScaleTextBlockToHeight(UTextBlock* InTextBlock, float LineHeight);
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveInputUnknown();
    
    UFUNCTION(BlueprintImplementableEvent)
    void ReceiveInputDetails(const FInputDisplay& InDisplay);
    
    UFUNCTION()
    void OnInputSourceChanged(EFSDInputSource InSource);
    
    UFUNCTION()
    void OnCustomKeyBindsChanged();
    
    UFUNCTION(BlueprintPure)
    FVector2D MeasureTextSize(const FText& Text, float Scale) const;
    
    UFUNCTION(BlueprintPure)
    float GetLineHeight() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyTextStyle(UTextBlock* InTextBlock, const FTextBlockStyle& InTextStyle);
    
public:
    URichTextInputWidget();
};

