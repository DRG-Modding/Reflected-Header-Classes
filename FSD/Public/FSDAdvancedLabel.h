#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: UMG UserWidget
#include "EFSDInputSource.h"
//CROSS-MODULE INCLUDE: SlateCore SlateFontInfo
#include "ActionIconMapping.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "FSDAdvancedLabel.generated.h"

class UTexture2D;
class UHorizontalBox;
class UTextBlock;
class UImage;

UCLASS(Abstract, EditInlineNew)
class UFSDAdvancedLabel : public UUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText FormattedText;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FText ControllerOverrideText;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool UpperCase;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EFSDInputSource PreviewAs;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetText(FText NewText, FText OverrideControllerText);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetAlwaysShowAs(EFSDInputSource InPreferredSource);
    
public:
    UFUNCTION(BlueprintCallable)
    void Refresh();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnReset();
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnNewLine(int32 Index);
    
    UFUNCTION()
    void OnLanguageChanged(const FString& NewCulture);
    
    UFUNCTION()
    void OnInputSourceChanged(EFSDInputSource Source);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddString(const FString& Value);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddKeyName(const FString& Name);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnAddIcon(const FString& Name, const FActionIconMapping& Icon);
    
public:
    UFUNCTION(BlueprintPure)
    FText GetText();
    
protected:
    UFUNCTION(BlueprintPure)
    bool GetIsDesignTime() const;
    
    UFUNCTION(BlueprintPure)
    EFSDInputSource GetCurrentInputSource() const;
    
    UFUNCTION(BlueprintCallable)
    UTextBlock* CreateTextBlock(const FString& Text, FSlateFontInfo InFontInfo, FLinearColor Color);
    
    UFUNCTION(BlueprintCallable)
    UImage* CreateImageSized(UTexture2D* Texture, int32 Width, int32 Height);
    
    UFUNCTION(BlueprintCallable)
    UImage* CreateImage(UTexture2D* Texture, bool MatchSize);
    
    UFUNCTION(BlueprintCallable)
    UHorizontalBox* CreateHorizontalBox();
    
public:
    UFSDAdvancedLabel();
};

