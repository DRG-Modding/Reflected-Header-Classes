#include "ImgMediaSource.h"

class AActor;

void UImgMediaSource::SetSequencePath(const FString& Path) {
}

void UImgMediaSource::SetMipLevelDistance(float Distance) {
}

void UImgMediaSource::RemoveTargetObject(AActor* InActor) {
}

void UImgMediaSource::RemoveGlobalCamera(AActor* InActor) {
}

FString UImgMediaSource::GetSequencePath() const {
    return TEXT("");
}

void UImgMediaSource::GetProxies(TArray<FString>& OutProxies) const {
}

void UImgMediaSource::AddTargetObject(AActor* InActor, float Width) {
}

void UImgMediaSource::AddGlobalCamera(AActor* InActor) {
}

UImgMediaSource::UImgMediaSource() {
    this->IsPathRelativeToProjectRoot = false;
}

