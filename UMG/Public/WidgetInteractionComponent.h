#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "EWidgetInteractionSource.h"
//CROSS-MODULE INCLUDE: Engine ECollisionChannel
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
//CROSS-MODULE INCLUDE: Engine HitResult
//CROSS-MODULE INCLUDE: InputCore Key
#include "WidgetInteractionComponent.generated.h"

class UWidgetComponent;
class UWidget;

UDELEGATE(BlueprintCallable) DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWidgetInteractionComponentOnHoveredWidgetChanged, UWidgetComponent*, WidgetComponent, UWidgetComponent*, PreviousWidgetComponent);

UCLASS(BlueprintType)
class UMG_API UWidgetInteractionComponent : public USceneComponent {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWidgetInteractionComponentOnHoveredWidgetChanged OnHoveredWidgetChanged;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    int32 VirtualUserIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float PointerIndex;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    TEnumAsByte<ECollisionChannel> TraceChannel;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float InteractionDistance;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    EWidgetInteractionSource InteractionSource;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bEnableHitTesting;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    bool bShowDebug;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    FLinearColor DebugColor;
    
protected:
    UPROPERTY(Transient)
    FHitResult CustomHitResult;
    
    UPROPERTY(Transient)
    FVector2D LocalHitLocation;
    
    UPROPERTY(Transient)
    FVector2D LastLocalHitLocation;
    
    UPROPERTY(Export, Transient)
    UWidgetComponent* HoveredWidgetComponent;
    
    UPROPERTY(Transient)
    FHitResult LastHitResult;
    
    UPROPERTY(Transient)
    bool bIsHoveredWidgetInteractable;
    
    UPROPERTY(Transient)
    bool bIsHoveredWidgetFocusable;
    
    UPROPERTY(Transient)
    bool bIsHoveredWidgetHitTestVisible;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetFocus(UWidget* FocusWidget);
    
    UFUNCTION(BlueprintCallable)
    void SetCustomHitResult(const FHitResult& HitResult);
    
    UFUNCTION(BlueprintCallable)
    bool SendKeyChar(const FString& Characters, bool bRepeat);
    
    UFUNCTION(BlueprintCallable)
    void ScrollWheel(float ScrollDelta);
    
    UFUNCTION(BlueprintCallable)
    void ReleasePointerKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    bool ReleaseKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    void PressPointerKey(FKey Key);
    
    UFUNCTION(BlueprintCallable)
    bool PressKey(FKey Key, bool bRepeat);
    
    UFUNCTION(BlueprintCallable)
    bool PressAndReleaseKey(FKey Key);
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverInteractableWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverHitTestVisibleWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsOverFocusableWidget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FHitResult GetLastHitResult() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    UWidgetComponent* GetHoveredWidgetComponent() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D Get2DHitLocation() const;
    
    UWidgetInteractionComponent();
};

