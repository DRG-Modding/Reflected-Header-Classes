#include "WidgetAnimationPlayCallbackProxy.h"

class UUMGSequencePlayer;
class UWidgetAnimationPlayCallbackProxy;
class UUserWidget;
class UWidgetAnimation;

UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationTimeRangeProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, float EndAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed) {
    return NULL;
}

UWidgetAnimationPlayCallbackProxy* UWidgetAnimationPlayCallbackProxy::CreatePlayAnimationProxyObject(UUMGSequencePlayer*& Result, UUserWidget* Widget, UWidgetAnimation* InAnimation, float StartAtTime, int32 NumLoopsToPlay, TEnumAsByte<EUMGSequencePlayMode::Type> PlayMode, float PlaybackSpeed) {
    return NULL;
}

UWidgetAnimationPlayCallbackProxy::UWidgetAnimationPlayCallbackProxy() {
}

