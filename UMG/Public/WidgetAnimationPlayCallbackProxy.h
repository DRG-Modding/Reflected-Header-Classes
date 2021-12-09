#pragma once
#include "CoreMinimal.h"
//CROSS-MODULE INCLUDE: CoreUObject Object
#include "EUMGSequencePlayMode.h"
#include "WidgetAnimationPlayCallbackProxy.generated.h"

class UWidgetAnimation;
class UUMGSequencePlayer;
class UWidgetAnimationPlayCallbackProxy;
class UUserWidget;

UDELEGATE() DECLARE_DYNAMIC_MULTICAST_DELEGATE(FWidgetAnimationPlayCallbackProxyFinished);

UCLASS(BlueprintType, MinimalAPI)
class UWidgetAnimationPlayCallbackProxy : public UObject {
    GENERATED_BODY()
public:
    UPROPERTY(BlueprintAssignable)
    FWidgetAnimationPlayCallbackProxyFinished Finished;
    
    UFUNCTION(BlueprintCallable)
    static UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationTimeRangeProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
    UFUNCTION(BlueprintCallable)
    static UWidgetAnimationPlayCallbackProxy* CreatePlayAnimationProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed);
    
    UWidgetAnimationPlayCallbackProxy();
};

