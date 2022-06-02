#include "ReflexBlueprintLibrary.h"

void UReflexBlueprintLibrary::SetReflexMode(const EReflexMode Mode) {
}

void UReflexBlueprintLibrary::SetFlashIndicatorEnabled(const bool bEnabled) {
}

float UReflexBlueprintLibrary::GetRenderLatencyInMs() {
    return 0.0f;
}

EReflexMode UReflexBlueprintLibrary::GetReflexMode() {
    return EReflexMode::Disabled;
}

bool UReflexBlueprintLibrary::GetReflexAvailable() {
    return false;
}

float UReflexBlueprintLibrary::GetGameToRenderLatencyInMs() {
    return 0.0f;
}

float UReflexBlueprintLibrary::GetGameLatencyInMs() {
    return 0.0f;
}

bool UReflexBlueprintLibrary::GetFlashIndicatorEnabled() {
    return false;
}

UReflexBlueprintLibrary::UReflexBlueprintLibrary() {
}

