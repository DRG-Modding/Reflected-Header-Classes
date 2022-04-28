#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector -FallbackName=Vector
#include "FSDUserWidget.h"
//CROSS-MODULE INCLUDE V2: -ModuleName=CoreUObject -ObjectName=Vector2D -FallbackName=Vector2D
//CROSS-MODULE INCLUDE V2: -ModuleName=SlateCore -ObjectName=Margin -FallbackName=Margin
#include "ActorTrackingWidget.generated.h"

class AActor;
class USceneComponent;
class UActorTrackingWidget;
class APlayerController;

UCLASS(Abstract, Blueprintable, EditInlineNew)
class UActorTrackingWidget : public UFSDUserWidget {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere, Export, Transient)
    TWeakObjectPtr<USceneComponent> TargetComponent;
    
    UPROPERTY(EditAnywhere)
    float WorldHeightOffset;
    
    UPROPERTY(EditAnywhere)
    float ScaleBy;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    FMargin ScreenMargin;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    int32 WidgetZOrder;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bTrackCenterOfMass;
    
    UPROPERTY(BlueprintReadWrite, EditAnywhere, meta=(AllowPrivateAccess=true))
    bool bHideWhenPlayerNearby;
    
public:
    UActorTrackingWidget();
    UFUNCTION(BlueprintCallable)
    void SetTargetComponent(USceneComponent* Component);
    
    UFUNCTION(BlueprintCallable)
    void SetTarget(AActor* Actor);
    
protected:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnTargetSet(AActor* NewTarget);
    
    UFUNCTION(BlueprintImplementableEvent)
    void OnTargetDistanceChanged(float Distance);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintImplementableEvent)
    void OnShow();
    
protected:
    UFUNCTION(BlueprintImplementableEvent)
    void OnInViewChanged(bool inView, float Angle);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    AActor* GetTarget() const;
    
    UFUNCTION(BlueprintCallable, BlueprintPure)
    FVector2D GetRenderTranslation() const;
    
    UFUNCTION(BlueprintPure)
    static bool FindScreenPosition(APlayerController* PlayerController, FVector WorldLocation, FMargin Margin, FVector& ScreenCord, float& Angle);
    
    UFUNCTION(BlueprintCallable)
    static UActorTrackingWidget* CreateTrackingWidget(APlayerController* PlayerController, TSubclassOf<UActorTrackingWidget> WidgetType, USceneComponent* NewTargetComponent);
    
};

