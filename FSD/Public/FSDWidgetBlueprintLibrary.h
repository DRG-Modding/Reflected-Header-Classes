#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine BlueprintFunctionLibrary
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: SlateCore EHorizontalAlignment
#include "SizeBoxSettings.h"
#include "WidgetAnimationSettings.h"
//CROSS-MODULE INCLUDE: UMG PaintContext
//CROSS-MODULE INCLUDE: SlateCore SlateFontInfo
//CROSS-MODULE INCLUDE: Engine TimerHandle
//CROSS-MODULE INCLUDE: UMG ESlateVisibility
//CROSS-MODULE INCLUDE: SlateCore Margin
//CROSS-MODULE INCLUDE: InputCore Key
//CROSS-MODULE INCLUDE: Slate ETextJustify
//CROSS-MODULE INCLUDE: SlateCore SlateBrush
//CROSS-MODULE INCLUDE: SlateCore EVerticalAlignment
#include "FSDWidgetBlueprintLibrary.generated.h"

class UTexture2D;
class UHorizontalBox;
class UWidgetAnimation;
class UObject;
class UWidget;
class USizeBox;
class UPanelWidget;
class UUserWidget;
class UTextBlock;
class UImage;
class UWindowWidget;
class AFSDPlayerState;
class APlayerController;
class UFSDCheatManager;
class UVerticalBox;
class USpacer;
class UHorizontalBoxSlot;
class UVerticalBoxSlot;
class UUniformGridPanel;
class UUniformGridSlot;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal_TwoParams(bool, FFSDWidgetBlueprintLibraryInCompareFunction, const UWidget*, InFirstWidget, const UWidget*, InSecondWidget);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FFSDWidgetBlueprintLibraryTimerDelegate);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_ThreeParams(FFSDWidgetBlueprintLibraryOnCreatedOrReused, bool, WasCreated, UUserWidget*, Widget, int32, ActiveIndex);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_OneParam(FFSDWidgetBlueprintLibraryOnCollapsed, UUserWidget*, Widget);

UCLASS(BlueprintType)
class UFSDWidgetBlueprintLibrary : public UBlueprintFunctionLibrary {
    GENERATED_BODY()
public:
    UFUNCTION(BlueprintCallable)
    static void ToggleAnimationLooping(UObject* WorldContext, UWidgetAnimation* InAnimation, FWidgetAnimationSettings InSettings, bool InLoop, bool& OutPlayingChanged, bool& OutIsPlaying);
    
    UFUNCTION(BlueprintPure)
    static bool TextSmallerThan(const FText& Text1, const FText& Text2);
    
    UFUNCTION(BlueprintPure)
    static bool TextGreaterThan(const FText& Text1, const FText& Text2);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UWidget*> SortWidgetArray(const TArray<UWidget*>& InWidgets, const FFSDWidgetBlueprintLibraryInCompareFunction& InCompareFunction);
    
    UFUNCTION(BlueprintCallable)
    static void SimpleBox(UPARAM(Ref) FPaintContext& Context, FVector2D Position, FVector2D Size, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable)
    static FTimerHandle SetTimerForNextTick(UObject* WorldContext, const FFSDWidgetBlueprintLibraryTimerDelegate& TimerDelegate);
    
    UFUNCTION(BlueprintCallable)
    static void SetSizeBoxSettings(UPARAM(Ref) USizeBox*& InSizeBox, const FSizeBoxSettings& InSettings);
    
    UFUNCTION(BlueprintCallable)
    static void SetMousePosition(UObject* WorldContextObject, int32 X, int32 Y);
    
    UFUNCTION(BlueprintCallable)
    static void SetChildrenVisibility(UPanelWidget* Panel, ESlateVisibility Visibility, int32 StartIndex, TSubclassOf<UUserWidget> OptionalClassFilter);
    
    UFUNCTION(BlueprintCallable)
    static void ScrubAnimation(UObject* WorldContext, UWidgetAnimation* InAnimation, float Progress01);
    
    UFUNCTION(BlueprintCallable)
    static void ScaleTextBlockToHeight(UTextBlock* TextBlock, float TargetHeight, bool SetMinimimumWidth);
    
    UFUNCTION(BlueprintCallable)
    static void ScaleImageToHeight(UImage* Image, float TargetHeight);
    
    UFUNCTION(BlueprintCallable)
    static void PrintStrings(UObject* WorldContextObject, const TArray<FString>& InStrings, bool bPrintToScreen, bool bPrintToLog, FLinearColor TextColor, float Duration);
    
    UFUNCTION(BlueprintPure)
    static FString MidIgnoringWhiteSpace(const FString& Source, int32 Index, int32 count);
    
    UFUNCTION(BlueprintPure)
    static FVector2D MeasureTextSize(const FText& Text, const FSlateFontInfo& Font);
    
    UFUNCTION(BlueprintPure)
    static FVector2D MeasureTextBlockSize(const UTextBlock* TextBlock);
    
    UFUNCTION(BlueprintCallable)
    static void Line(FPaintContext& Context, FVector2D Pos1, FVector2D Pos2, FLinearColor Tint);
    
    UFUNCTION(BlueprintPure)
    static FLinearColor LerpColors(const TArray<FLinearColor>& Colors, bool Interpolate, float Progress01);
    
    UFUNCTION(BlueprintPure)
    static int32 LengthIgnoringWhitespace(const FString& Source);
    
    UFUNCTION(BlueprintPure)
    static bool IsWindowsPlatform(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static bool IsWhiteSpaceAt(const FString& Source, int32 Index);
    
    UFUNCTION(BlueprintPure)
    static bool IsWhiteSpace(const FString& Source);
    
    UFUNCTION(BlueprintPure)
    static bool IsHUDVisible(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static FString IntToRomanNumeral(int32 Value);
    
    UFUNCTION(BlueprintPure)
    static bool HasAnyVisibleChildren(UPanelWidget* Panel, int32 StartIndex, TSubclassOf<UUserWidget> OptionalClassFilter);
    
    UFUNCTION(BlueprintPure)
    static FString GetShortTimeString(int32 TotalSeconds, bool BlinkDelimiter);
    
    UFUNCTION(BlueprintPure)
    static UWindowWidget* GetParentWindowWidget(UUserWidget* InWidget);
    
    UFUNCTION(BlueprintPure)
    static UUserWidget* GetParentUserWidget(UUserWidget* InWidget);
    
    UFUNCTION(BlueprintPure)
    static AFSDPlayerState* GetOwningFSDPlayerState(UWidget* Target);
    
    UFUNCTION(BlueprintPure)
    static FText GetKeyName(const FKey& Key);
    
    UFUNCTION(BlueprintPure)
    static float GetFontMaxHeight(const FSlateFontInfo& Font);
    
    UFUNCTION(BlueprintPure)
    static float GetFontBaseline(const FSlateFontInfo& Font);
    
    UFUNCTION(BlueprintPure)
    static UWidget* GetFocusedWidget(UObject* WorldContextObject, APlayerController* Controller);
    
    UFUNCTION(BlueprintPure)
    static UUserWidget* GetFocusableParentUserWidget(UUserWidget* InWidget);
    
    UFUNCTION(BlueprintCallable)
    static FVector2D GetDrawSize(UPARAM(Ref) FPaintContext& InContext);
    
    UFUNCTION(BlueprintPure)
    static UFSDCheatManager* GetCheatManager(UObject* WorldContextObject);
    
    UFUNCTION(BlueprintPure)
    static UWidget* FindChildWidget(UPARAM(Ref) UPanelWidget*& ParentWidget, TSubclassOf<UUserWidget> WidgetClass, bool SearchChildren);
    
    UFUNCTION(BlueprintCallable)
    static UVerticalBox* CreateVerticalBox(UObject* WorldContext);
    
    UFUNCTION(BlueprintCallable)
    static UTextBlock* CreateTextBlock(UObject* WorldContext, FText Text, FSlateFontInfo Font, TEnumAsByte<ETextJustify::Type> Justification, FLinearColor Color, bool WrapText);
    
    UFUNCTION(BlueprintCallable)
    static USpacer* CreateSpacer(UObject* WorldContext, FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UUserWidget*> CreateOrReuseChildrenWithCallbackEx(UPanelWidget* Panel, int32 count, TSubclassOf<UUserWidget> WidgetClass, const FFSDWidgetBlueprintLibraryOnCreatedOrReused& OnCreatedOrReused, const FFSDWidgetBlueprintLibraryOnCollapsed& OnCollapsed);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UUserWidget*> CreateOrReuseChildrenWithCallback(UPanelWidget* Panel, int32 count, TSubclassOf<UUserWidget> WidgetClass, const FFSDWidgetBlueprintLibraryOnCreatedOrReused& OnCreatedOrReused);
    
    UFUNCTION(BlueprintCallable)
    static TArray<UUserWidget*> CreateOrReuseChildren(UPanelWidget* Panel, int32 count, TSubclassOf<UUserWidget> WidgetClass);
    
    UFUNCTION(BlueprintCallable)
    static UImage* CreateImageSized(UObject* WorldContext, UTexture2D* Texture, FLinearColor Tint, FVector2D Size);
    
    UFUNCTION(BlueprintCallable)
    static UImage* CreateImage(UObject* WorldContext, UTexture2D* Texture, FLinearColor Tint, bool AutoSize);
    
    UFUNCTION(BlueprintCallable)
    static UHorizontalBox* CreateHorizontalBox(UObject* WorldContext);
    
    UFUNCTION(BlueprintPure)
    static FText ClampTextLength(const FText& Text, int32 MaxLength, const FText& CutOffIndicator);
    
    UFUNCTION(BlueprintCallable)
    static void Box(UPARAM(Ref) FPaintContext& Context, FVector2D Position, FVector2D Size, const FSlateBrush& Brush, FLinearColor Tint);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* AddWidgetToRow(UVerticalBox* VerticalBox, UWidget* Widget, int32 MaxWidgetsPerRow, float WidgetSpacing, float RowSpacing, UHorizontalBoxSlot*& OutSlot, UHorizontalBox*& OutRow);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* AddChildToVerticalBoxEx(UVerticalBox* VerticalBox, UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, float Size, FMargin Padding, UVerticalBoxSlot*& OutSlot, UVerticalBox*& OutVerticalBox);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* AddChildToUniformGridEx(UUniformGridPanel* GridPanel, UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, int32 Column, int32 Row, UUniformGridSlot*& OutSlot, UUniformGridPanel*& OutGridPanel);
    
    UFUNCTION(BlueprintCallable)
    static UWidget* AddChildToHorizontalBoxEx(UHorizontalBox* HorizontalBox, UWidget* Widget, TEnumAsByte<EHorizontalAlignment> HorizontalAlignment, TEnumAsByte<EVerticalAlignment> VerticalAlignment, float Size, FMargin Padding, UHorizontalBoxSlot*& OutSlot, UHorizontalBox*& OutHorizontalBox);
    
    UFSDWidgetBlueprintLibrary();
};

