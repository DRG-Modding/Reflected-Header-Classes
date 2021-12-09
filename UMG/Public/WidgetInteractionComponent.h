#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject LinearColor
#include "EWidgetInteractionSource.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
//CROSS-MODULE INCLUDE: Engine ECollisionChannel
//CROSS-MODULE INCLUDE: Engine HitResult
//CROSS-MODULE INCLUDE: InputCore Key
#include "WidgetInteractionComponent.generated.h"

class UWidgetComponent;
class UWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE_TwoParams(FWidgetInteractionComponentOnHoveredWidgetChanged, UWidgetComponent*, WidgetComponent, UWidgetComponent*, PreviousWidgetComponent);

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
    
    UFUNCTION(BlueprintPure)
    bool IsOverInteractableWidget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOverHitTestVisibleWidget() const;
    
    UFUNCTION(BlueprintPure)
    bool IsOverFocusableWidget() const;
    
    UFUNCTION(BlueprintPure)
    FHitResult GetLastHitResult() const;
    
    UFUNCTION(BlueprintPure)
    UWidgetComponent* GetHoveredWidgetComponent() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D Get2DHitLocation() const;
    
    UWidgetInteractionComponent();
};

