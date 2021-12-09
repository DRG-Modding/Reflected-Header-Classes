#include "WidgetAnimation.h"

class UUserWidget;

void UWidgetAnimation::UnbindFromAnimationStarted(UUserWidget* Widget, FWidgetAnimationDelegate Delegate) {
}

void UWidgetAnimation::UnbindFromAnimationFinished(UUserWidget* Widget, FWidgetAnimationDelegate Delegate) {
}

void UWidgetAnimation::UnbindAllFromAnimationStarted(UUserWidget* Widget) {
}

void UWidgetAnimation::UnbindAllFromAnimationFinished(UUserWidget* Widget) {
}

float UWidgetAnimation::GetStartTime() const {
    return 0.0f;
}

float UWidgetAnimation::GetEndTime() const {
    return 0.0f;
}

void UWidgetAnimation::BindToAnimationStarted(UUserWidget* Widget, FWidgetAnimationDelegate Delegate) {
}

void UWidgetAnimation::BindToAnimationFinished(UUserWidget* Widget, FWidgetAnimationDelegate Delegate) {
}

UWidgetAnimation::UWidgetAnimation() {
    this->MovieScene = NULL;
    this->bLegacyFinishOnStop = true;
}

