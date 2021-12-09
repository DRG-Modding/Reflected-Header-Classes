#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: SlateCore Margin
#include "FSDUserWidget.h"
//CROSS-MODULE INCLUDE: CoreUObject Vector2D
//CROSS-MODULE INCLUDE: CoreUObject Vector
#include "ActorTrackingWidget.generated.h"

class AActor;
class USceneComponent;
class APlayerController;
class UActorTrackingWidget;

UCLASS(Abstract, EditInlineNew)
class UActorTrackingWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(BlueprintReadOnly, Export, Transient)
    TWeakObjectPtr<USceneComponent> TargetComponent;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere)
    float WorldHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float ScaleBy;
    
    UPROPERTY(EditAnywhere)
    FMargin ScreenMargin;
    
    UPROPERTY(EditAnywhere)
    int32 WidgetZOrder;
    
    UPROPERTY(EditAnywhere)
    bool bTrackCenterOfMass;
    
    UPROPERTY(EditAnywhere)
    bool bHideWhenPlayerNearby;
    
public:
    UFUNCTION(BlueprintCallable)
    void SetTargetComponent(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetSet(AActor* NewTarget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetDistanceChanged(float Distance);
    
public:
    UFUNCTION(BlueprintImplementableEvent)
    void OnShow();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInViewChanged(bool inView, float Angle);
    
public:
    UFUNCTION(BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintPure)
    FVector2D GetRenderTranslation() const;
    
    UFUNCTION(BlueprintPure)
    static bool FindScreenPosition(APlayerController* PlayerController, FVector WorldLocation, FMargin Margin, FVector& ScreenCord, float& Angle);
    
    UFUNCTION(BlueprintCallable)
    static UActorTrackingWidget* CreateTrackingWidget(APlayerController* PlayerController, TSubclassOf<UActorTrackingWidget> WidgetType, USceneComponent* NewTargetComponent);
    
    UActorTrackingWidget();
};

