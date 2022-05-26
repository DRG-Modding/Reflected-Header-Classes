#pragma once
#include "CoreMinimal.h"
#include "InputDisplay.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=UMG -ObjectName=UserWidget -FallbackName=UserWidget
#include "EFSDInputSource.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=TextBlockStyle -FallbackName=TextBlockStyle
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
#include "RichTextInputWidget.generated.h"

class URichTextBlock;
class UTextBlock;

UCLASS(Abstract, Blueprintable, EditInlineNew, HideDropdown)
class URichTextInputWidget : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FName InputName;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    TMap<FName, FString> MetaData;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FText Content;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FTextBlockStyle TextStyle;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    EFSDInputSource InputSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, Export, meta=(AllowPrivateAccess=true))
    URichTextBlock* RichTextBlock;
    
public:
    URichTextInputWidget();
protected:
    UFUNCTION(BlueprintCallable)
    void ScaleTextBlockToHeight(UTextBlock* InTextBlock, float LineHeight);
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInputUnknown();
    
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void ReceiveInputDetails(const FInputDisplay& InDisplay);
    
    UFUNCTION(BlueprintCallable)
    void OnInputSourceChanged(EFSDInputSource InSource);
    
    UFUNCTION(BlueprintCallable)
    void OnCustomKeyBindsChanged();
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D MeasureTextSize(const FText& Text, float Scale) const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    float GetLineHeight() const;
    
    UFUNCTION(BlueprintCallable)
    void ApplyTextStyle(UTextBlock* InTextBlock, const FTextBlockStyle& InTextStyle);
    
};

