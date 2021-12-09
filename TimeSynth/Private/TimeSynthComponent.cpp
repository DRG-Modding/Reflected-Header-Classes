#include "TimeSynthComponent.h"

class UTimeSynthVolumeGroup;
class UTimeSynthClip;

void UTimeSynthComponent::StopSoundsOnVolumeGroupWithFadeOverride(UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization, const FTimeSynthTimeDef& FadeTime) {
}

void UTimeSynthComponent::StopSoundsOnVolumeGroup(UTimeSynthVolumeGroup* InVolumeGroup, ETimeSynthEventClipQuantization EventQuantization) {
}

void UTimeSynthComponent::StopClipWithFadeOverride(FTimeSynthClipHandle InClipHandle, ETimeSynthEventClipQuantization EventQuantization, const FTimeSynthTimeDef& FadeTime) {
}

void UTimeSynthComponent::StopClip(FTimeSynthClipHandle InClipHandle, ETimeSynthEventClipQuantization EventQuantization) {
}

void UTimeSynthComponent::SetVolumeGroup(UTimeSynthVolumeGroup* InVolumeGroup, float VolumeDb, float FadeTimeSec) {
}

void UTimeSynthComponent::SetSeed(int32 InSeed) {
}

void UTimeSynthComponent::SetQuantizationSettings(const FTimeSynthQuantizationSettings& InQuantizationSettings) {
}

void UTimeSynthComponent::SetFilterSettings(ETimeSynthFilter Filter, const FTimeSynthFilterSettings& InSettings) {
}

void UTimeSynthComponent::SetFilterEnabled(ETimeSynthFilter Filter, bool bIsEnabled) {
}

void UTimeSynthComponent::SetFFTSize(ETimeSynthFFTSize InFFTSize) {
}

void UTimeSynthComponent::SetEnvelopeFollowerSettings(const FTimeSynthEnvelopeFollowerSettings& InSettings) {
}

void UTimeSynthComponent::SetEnvelopeFollowerEnabled(bool bInIsEnabled) {
}

void UTimeSynthComponent::SetBPM(const float BeatsPerMinute) {
}

void UTimeSynthComponent::ResetSeed() {
}

FTimeSynthClipHandle UTimeSynthComponent::PlayClip(UTimeSynthClip* InClip, UTimeSynthVolumeGroup* InVolumeGroup) {
    return FTimeSynthClipHandle{};
}

bool UTimeSynthComponent::HasActiveClips() {
    return false;
}

TArray<FTimeSynthSpectralData> UTimeSynthComponent::GetSpectralData() const {
    return TArray<FTimeSynthSpectralData>();
}

float UTimeSynthComponent::GetEnvelopeFollowerValue() const {
    return 0.0f;
}

int32 UTimeSynthComponent::GetBPM() const {
    return 0;
}

void UTimeSynthComponent::AddQuantizationEventDelegate(ETimeSynthEventQuantization QuantizationType, const FTimeSynthComponentOnQuantizationEvent& OnQuantizationEvent) {
}

UTimeSynthComponent::UTimeSynthComponent() {
    this->bEnableSpectralAnalysis = false;
    this->FFTSize = ETimeSynthFFTSize::Min_64;
    this->bIsFilterAEnabled = false;
    this->bIsFilterBEnabled = false;
    this->bIsEnvelopeFollowerEnabled = false;
    this->MaxPoolSize = 20;
}

