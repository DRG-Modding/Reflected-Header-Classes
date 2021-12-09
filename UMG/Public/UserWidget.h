#pragma once
#include "CoreMinimal.h"
#include "NamedSlotBinding.h"
//CROSS-MODULE INCLUDE: SlateCore SlateColor
#include "Widget.h"
#include "EventReply.h"
#include "NamedSlotInterface.h"
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "EWidgetTickFrequency.h"
//CROSS-MODULE INCLUDE: SlateCore PointerEvent
#include "AnimationEventBinding.h"
//CROSS-MODULE INCLUDE: SlateCore Geometry
#include "EUMGSequencePlayMode.h"
//CROSS-MODULE INCLUDE: Engine EInputEvent
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: SlateCore FocusEvent
//CROSS-MODULE INCLUDE: Slate Anchors
//CROSS-MODULE INCLUDE: SlateCore CharacterEvent
//CROSS-MODULE INCLUDE: SlateCore KeyEvent
#include "PaintContext.h"
//CROSS-MODULE INCLUDE: SlateCore MotionEvent
//CROSS-MODULE INCLUDE: SlateCore AnalogInputEvent
#include "EWidgetAnimationEvent.h"
#include "UserWidget.generated.h"

class UUMGSequencePlayer;
class UWidgetAnimation;
class UWidgetTree;
class APawn;
class UInputComponent;
class USoundBase;
class APlayerController;
class UDragDropOperation;

UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(FLinearColor, FUserWidgetColorAndOpacityDelegate);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FUserWidgetCallback);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE_RetVal(FSlateColor, FUserWidgetForegroundColorDelegate);
UDELEGATE() DECLARE_DYNAMIC_DELEGATE(FUserWidgetDelegate);

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UMG_API UUserWidget : public UWidget, public INamedSlotInterface {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FLinearColor ColorAndOpacity;
    
    UPROPERTY()
    FUserWidgetColorAndOpacityDelegate ColorAndOpacityDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FSlateColor ForegroundColor;
    
    UPROPERTY()
    FUserWidgetForegroundColorDelegate ForegroundColorDelegate;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    FMargin Padding;
    
    UPROPERTY(Transient)
    TArray<UUMGSequencePlayer*> ActiveSequencePlayers;
    
    UPROPERTY(Transient)
    TArray<UUMGSequencePlayer*> StoppedSequencePlayers;
    
private:
    UPROPERTY()
    TArray<FNamedSlotBinding> NamedSlotBindings;
    
public:
    UPROPERTY(Instanced, TextExportTransient)
    UWidgetTree* WidgetTree;
    
    UPROPERTY(BlueprintReadOnly, EditAnywhere)
    int32 Priority;
    
    UPROPERTY()
    uint8 bSupportsKeyboardFocus: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bIsFocusable: 1;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    uint8 bStopAction: 1;
    
    UPROPERTY()
    uint8 bHasScriptImplementedTick: 1;
    
    UPROPERTY()
    uint8 bHasScriptImplementedPaint: 1;
    
    UPROPERTY()
    uint8 bCookedWidgetTree: 1;
    
private:
    UPROPERTY(BlueprintReadOnly, EditDefaultsOnly, meta=(AllowPrivateAccess=true))
    EWidgetTickFrequency TickFrequency;
    
protected:
    UPROPERTY(DuplicateTransient, Export, Transient)
    UInputComponent* InputComponent;
    
    UPROPERTY(DuplicateTransient, Transient)
    TArray<FAnimationEventBinding> AnimationCallbacks;
    
    UFUNCTION(BlueprintCallable)
    void UnregisterInputComponent();
    
public:
    UFUNCTION(BlueprintCallable)
    void UnbindFromAnimationStarted(UWidgetAnimation* Animation, FUserWidgetDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindFromAnimationFinished(UWidgetAnimation* Animation, FUserWidgetDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void UnbindAllFromAnimationStarted(UWidgetAnimation* Animation);
    
    UFUNCTION(BlueprintCallable)
    void UnbindAllFromAnimationFinished(UWidgetAnimation* Animation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Tick(FGeometry MyGeometry, float InDeltaTime);
    
protected:
    UFUNCTION(BlueprintCallable)
    void StopListeningForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType);
    
    UFUNCTION(BlueprintCallable)
    void StopListeningForAllInputActions();
    
public:
    UFUNCTION(BlueprintCallable)
    void StopAnimationsAndLatentActions();
    
    UFUNCTION(BlueprintCallable)
    void StopAnimation(const UWidgetAnimation* InAnimation);
    
    UFUNCTION(BlueprintCallable)
    void StopAllAnimations();
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetPositionInViewport(FVector2D Position, bool bRemoveDPIScale);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetPlaybackSpeed(const UWidgetAnimation* InAnimation, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetPadding(FMargin InPadding);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetOwningPlayer(APlayerController* LocalPlayerController);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetNumLoopsToPlay(const UWidgetAnimation* InAnimation, int32 NumLoopsToPlay);
    
protected:
    UFUNCTION(BlueprintCallable)
    void SetInputActionPriority(int32 NewPriority);
    
    UFUNCTION(BlueprintCallable)
    void SetInputActionBlocking(bool bShouldBlock);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetForegroundColor(FSlateColor InForegroundColor);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetDesiredSizeInViewport(FVector2D Size);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetColorAndOpacity(FLinearColor InColorAndOpacity);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetAnchorsInViewport(FAnchors Anchors);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void SetAlignmentInViewport(FVector2D Alignment);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void ReverseAnimation(const UWidgetAnimation* InAnimation);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void RemoveFromViewport();
    
protected:
    UFUNCTION(BlueprintCallable)
    void RegisterInputComponent();
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void PreConstruct(bool IsDesignTime);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void PlaySound(USoundBase* SoundToPlay);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    UUMGSequencePlayer* PlayAnimationTimeRange(UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed, bool bRestoreState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    UUMGSequencePlayer* PlayAnimationReverse(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    UUMGSequencePlayer* PlayAnimationForward(UWidgetAnimation* InAnimation, float PlaybackSpeed, bool bRestoreState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    UUMGSequencePlayer* PlayAnimation(UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed, bool bRestoreState);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    float PauseAnimation(const UWidgetAnimation* InAnimation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnTouchStarted(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnTouchMoved(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnTouchGesture(FGeometry MyGeometry, const FPointerEvent& GestureEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnTouchForceChanged(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnTouchEnded(FGeometry MyGeometry, const FPointerEvent& InTouchEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnRemovedFromFocusPath(FFocusEvent InFocusEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnPreviewMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintImplementableEvent)
    FEventReply OnPreviewKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnPaint(UPARAM(Ref) FPaintContext& Context) const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnMouseWheel(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnMouseMove(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnMouseLeave(const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnMouseEnter(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnMouseCaptureLost();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnMouseButtonUp(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnMouseButtonDown(FGeometry MyGeometry, const FPointerEvent& MouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnMouseButtonDoubleClick(FGeometry InMyGeometry, const FPointerEvent& InMouseEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnMotionDetected(FGeometry MyGeometry, FMotionEvent InMotionEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnKeyUp(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnKeyDown(FGeometry MyGeometry, FKeyEvent InKeyEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnKeyChar(FGeometry MyGeometry, FCharacterEvent InCharacterEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnInitialized();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    FEventReply OnFocusReceived(FGeometry MyGeometry, FFocusEvent InFocusEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnFocusLost(FFocusEvent InFocusEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    bool OnDrop(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    bool OnDragOver(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDragLeave(FPointerEvent PointerEvent, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDragEnter(FGeometry MyGeometry, FPointerEvent PointerEvent, UDragDropOperation* Operation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDragDetected(FGeometry MyGeometry, const FPointerEvent& PointerEvent, UDragDropOperation*& Operation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnDragCancelled(const FPointerEvent& PointerEvent, UDragDropOperation* Operation);
    
protected:
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent)
    void OnAnimationStarted(const UWidgetAnimation* Animation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintNativeEvent)
    void OnAnimationFinished(const UWidgetAnimation* Animation);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    FEventReply OnAnalogValueChanged(FGeometry MyGeometry, FAnalogInputEvent InAnalogInputEvent);
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void OnAddedToFocusPath(FFocusEvent InFocusEvent);
    
protected:
    UFUNCTION(BlueprintCallable)
    void ListenForInputAction(FName ActionName, TEnumAsByte<EInputEvent> EventType, bool bConsume, FUserWidgetCallback Callback);
    
public:
    UFUNCTION(BlueprintPure)
    bool IsPlayingAnimation() const;
    
protected:
    UFUNCTION(BlueprintPure)
    bool IsListeningForInputAction(FName ActionName) const;
    
public:
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    bool IsInViewport() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    bool IsInteractable() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    bool IsAnyAnimationPlaying() const;
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool IsAnimationPlayingForward(const UWidgetAnimation* InAnimation);
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    bool IsAnimationPlaying(const UWidgetAnimation* InAnimation) const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    APawn* GetOwningPlayerPawn() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    bool GetIsVisible() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    float GetAnimationCurrentTime(const UWidgetAnimation* InAnimation) const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FAnchors GetAnchorsInViewport() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintPure)
    FVector2D GetAlignmentInViewport() const;
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Destruct();
    
    UFUNCTION(BlueprintCosmetic, BlueprintImplementableEvent)
    void Construct();
    
    UFUNCTION(BlueprintCallable)
    void CancelLatentActions();
    
    UFUNCTION(BlueprintCallable)
    void BindToAnimationStarted(UWidgetAnimation* Animation, FUserWidgetDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindToAnimationFinished(UWidgetAnimation* Animation, FUserWidgetDelegate Delegate);
    
    UFUNCTION(BlueprintCallable)
    void BindToAnimationEvent(UWidgetAnimation* Animation, FUserWidgetDelegate Delegate, EWidgetAnimationEvent AnimationEvent, FName UserTag);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    void AddToViewport(int32 ZOrder);
    
    UFUNCTION(BlueprintCallable, BlueprintCosmetic)
    bool AddToPlayerScreen(int32 ZOrder);
    
    UUserWidget();
};

