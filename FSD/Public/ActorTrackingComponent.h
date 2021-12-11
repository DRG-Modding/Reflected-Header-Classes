#pragma once
#include "CoreMinimal.h"
#include "Templates/SubclassOf.h"
//CROSS-MODULE INCLUDE: Engine SceneComponent
#include "ActorTrackingComponent.generated.h"

class UActorTrackingWidget;

UCLASS(BlueprintType)
class UActorTrackingComponent : public USceneComponent {
    GENERATED_BODY()
public:
protected:
    UPROPERTY(EditAnywhere)
    TSubclassOf<UActorTrackingWidget> WidgetType;
    
    UPROPERTY(EditAnywhere)
    bool VisibleOnHoldTAB;
    
    UPROPERTY(EditAnywhere)
    bool VisibleFromStart;
    
    UPROPERTY(BlueprintReadWrite)
    bool bIconHidden;
    
    UPROPERTY(Export, Transient)
    TWeakObjectPtr<UActorTrackingWidget> Widget;
    
public:
    UFUNCTION(BlueprintCallable)
    void ToggleIcon(bool Visible);
    
protected:
    UFUNCTION(BlueprintCallable)
    void OnHoldTAB(bool IsDown);
    
public:
    UFUNCTION(BlueprintCallable, BlueprintPure)
    bool IsIconVisible() const;
    
    UActorTrackingComponent();
};

